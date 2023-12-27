/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:36:21 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

#include <iostream>

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = nullptr;
	}
}

Character::Character(const Character & src)
{
	*this = src;
}

Character & Character::operator=(const Character & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		for (int i = 0; i < 4; ++i)
		{
			if (rhs.inventory[i] != nullptr)
			{
				this->inventory[i] = rhs.inventory[i]->clone();
			}
			else
			{
				this->inventory[i] = nullptr;
			}
		}
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != nullptr)
		{
			delete inventory[i];
		}
	}
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
    // Code pour équiper une Materia dans l'inventaire
}

void Character::unequip(int idx)
{
    // Code pour déséquiper une Materia de l'inventaire
}

void Character::use(int idx, ICharacter& target)
{
    // Code pour utiliser une Materia de l'inventaire sur la cible
}
