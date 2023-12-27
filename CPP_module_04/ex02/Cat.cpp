/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:05:46 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 22:02:17 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Cat::Cat() : Animal(), brain(new Brain())
{
	_type = "Cat";

	std::cout << MAGENTA << "Cat constructed." << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << MAGENTA << "Cat copied." << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Cat::~Cat()
{
	delete brain;

	std::cout << MAGENTA << "Cat destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	Cat::makeSound() const
{
	std::cout << MAGENTA << "Meow!" << RESET << std::endl;
}
