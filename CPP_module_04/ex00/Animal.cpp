/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:59:21 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:10:43 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Animal::Animal() : _type("Animal")
{
	std::cout << YELLOW << "Animal constructed." << RESET << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << YELLOW << "Animal copied." << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Animal::~Animal()
{
	std::cout << YELLOW << "Animal destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << YELLOW << "Some animal sound." << RESET << std::endl;
}
