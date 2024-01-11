/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefus       #+#    #+#             */
/*   Updated: 2024/01/11 20:47:15 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria & src) : type(src.type)
{
}

AMateria & AMateria::operator=(const AMateria & rhs)
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

AMateria::~AMateria()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using AMateria on " << target.getName() << std::endl;
}




