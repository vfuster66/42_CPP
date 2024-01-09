/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefus       #+#    #+#             */
/*   Updated: 2024/01/08 16:11:01 by vfuster-         ###   ########.fr       */
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
		inventory[i] = 0;
	}
}

Character::Character(const Character & src)
{
	*this = src;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}

		for (int i = 0; i < 4; ++i)
		{
			if (rhs.inventory[i] != NULL)
			{
				inventory[i] = rhs.inventory[i]->clone();
			}
		}

		name = rhs.name;
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
		if (inventory[i] != 0)
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
	if (m == NULL)
	{
		std::cout << "Cannot equip a null Materia" << std::endl;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equipped at slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full, cannot equip Materia " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (inventory[idx] != 0)
		{
			std::cout << "Materia " << inventory[idx]->getType() << " unequipped from slot " << idx << std::endl;
			inventory[idx] = 0;
		}
		else
		{
			std::cout << "No Materia to unequip at slot " << idx << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid slot index " << idx << ", cannot unequip Materia" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index " << idx << std::endl;
		return;
	}

	if (idx >= 0 && idx < 4)
	{
		if (inventory[idx] != 0)
		{
			std::cout << "Using Materia " << inventory[idx]->getType() << " on " << target.getName() << " from slot " << idx << std::endl;
			inventory[idx]->use(target);
		}
		else
		{
			std::cout << "No Materia to use at slot " << idx << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid slot index " << idx << ", cannot use Materia" << std::endl;
	}
}


