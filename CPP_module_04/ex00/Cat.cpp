/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:05:46 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:21:25 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << MAGENTA << "Cat constructed." << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << MAGENTA << "Cat copied." << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Cat::~Cat()
{
	std::cout << MAGENTA << "Cat destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	Cat::makeSound() const
{
	std::cout << MAGENTA << "Meow!" << RESET << std::endl;
}
