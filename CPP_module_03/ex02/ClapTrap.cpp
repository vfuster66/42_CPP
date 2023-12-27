/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:34 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 14:23:06 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

ClapTrap::ClapTrap(const std::string &_name) : _name(_name), _hitPoints(10),
			_energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
			 _hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
			 _attackDamage(other._attackDamage)
{
	std::cout << "Copy constructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed." << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack because of low energy or health." << std::endl;

		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't take more damage." << std::endl;

		return;
	}

	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
	}

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if(_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't be repaired because of low energy or health." << std::endl;

		return ;
	}
	
	_hitPoints += amount;
	_energyPoints--;
	
	std::cout << "ClapTrap " << _name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
}
