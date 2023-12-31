/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:42:30 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 11:20:31 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is destroyed." << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void FragTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "FragTrap " << _name << " can't attack due to insufficient energy or hit points." << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}

