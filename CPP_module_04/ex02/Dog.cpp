/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:05:46 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:48:46 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Dog::Dog() : AAnimal(), brain(new Brain())
{
	_type = "Dog";

	std::cout << RED << "Dog constructed." << RESET << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << RED << "Dog copied." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) 
	{
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Dog::~Dog()
{
	delete brain;

	std::cout << RED << "Dog destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	Dog::makeSound() const
{
	std::cout << RED << "Woof!" << RESET << std::endl;
}
