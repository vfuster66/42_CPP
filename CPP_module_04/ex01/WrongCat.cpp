/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:39:09 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:08:04 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << CYAN << "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;

	std::cout << CYAN << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}

	std::cout << CYAN << "WrongCat assignment operator called" << RESET << std::endl;

	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

WrongCat::~WrongCat()
{
	std::cout << CYAN << "WrongCat destructor called" << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void WrongCat::makeSound() const
{
	std::cout << CYAN << "WrongCat Meow!" << RESET << std::endl;
}
