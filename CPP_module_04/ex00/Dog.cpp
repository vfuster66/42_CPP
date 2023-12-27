/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:05:46 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:15:07 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << RED << "Dog constructed." << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << RED << "Dog copied." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);

	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Dog::~Dog()
{
	std::cout << RED << "Dog destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	Dog::makeSound() const
{
	std::cout << RED << "Woof!" << RESET << std::endl;
}
