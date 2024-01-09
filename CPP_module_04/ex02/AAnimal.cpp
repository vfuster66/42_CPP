/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:59:21 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:51:51 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << YELLOW << "AAnimal constructed." << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
	std::cout << YELLOW << "AAnimal copied." << RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
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

AAnimal::~AAnimal()
{
	std::cout << YELLOW << "Animal destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

std::string AAnimal::getType() const
{
	return _type;
}
