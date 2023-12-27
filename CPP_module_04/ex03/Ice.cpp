/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:26:59 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

#include <iostream>

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &src) : AMateria(src)
{
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Ice::~Ice()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
