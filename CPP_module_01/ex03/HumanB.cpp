/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:51:33 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:00:29 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

HumanB::HumanB(const std::string &name) : _name(name), _weapon(0)
{
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

HumanB::~HumanB()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (_weapon)
	{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " has no weapon to attack with" << std::endl;
	}
}
