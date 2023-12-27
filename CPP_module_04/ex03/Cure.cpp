/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:30:13 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

#include <iostream>

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &src) : AMateria(src)
{
}

Cure &Cure::operator=(const Cure &rhs)
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

Cure::~Cure()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

