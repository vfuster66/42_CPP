/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:36:43 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:18:10 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/


WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << BLUE << "WrongAnimal constructed." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
	std::cout << BLUE << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	
	std::cout << BLUE << "WrongAnimal assignment operator called" << RESET << std::endl;

	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "WrongAnimal destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void WrongAnimal::makeSound() const
{
	std::cout << BLUE << "WrongAnimal sound!" << RESET << std::endl;
}


std::string WrongAnimal::getType() const
{
	return _type;
}
