/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:42:17 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 09:47:59 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Test Constructeur/Destructeur
void testConstructorAndDestructor()
{
	std::cout << "Test Constructor and Destructor:" << std::endl;
	ClapTrap ct("TestClapTrap");
}

// Test attaque avec energie
void testAttackWithEnergy()
{
	std::cout << "\nTest Attack with Enough Energy:" << std::endl;
	ClapTrap ct("Attacker");
	ct.setAttackDamage(5);
	ct.attack("Target");
}

// Test attaque jusqu'a ce qu'il n'y ait plus d' energie
void testAttackWithoutEnergy()
{
	std::cout << "\nTest Attack without Enough Energy:" << std::endl;
	ClapTrap ct("WeakAttacker");
	ct.setAttackDamage(5);
	for (int i = 0; i < 11; i++)
	{
		ct.attack("Target");
	}
}

// Test reparation energie
void testRepairWithEnergy()
{
	std::cout << "\nTest Repair with Enough Energy:" << std::endl;
	ClapTrap ct("Repairer");
	ct.takeDamage(5);
	ct.beRepaired(3);
}

// Test energie jusqu'a ce qu'il n'y en ait plus
void testRepairWithoutEnergy()
{
	std::cout << "\nTest Repair without Enough Energy:" << std::endl;
	ClapTrap ct("WeakRepairer");
	ct.takeDamage(5);
	for (int i = 0; i < 11; i++)
	{
		ct.beRepaired(1);
	}
}

// Test prise de degats
void testTakeDamage()
{
	std::cout << "\nTest Take Damage:" << std::endl;
	ClapTrap ct("Victim");
	ct.takeDamage(3);
}

// Test prise de degats eleves pour etre fatal
void testFatalDamage()
{
	std::cout << "\nTest Fatal Damage:" << std::endl;
	ClapTrap ct("Unfortunate");
	ct.takeDamage(100);
}

int main()
{
	testConstructorAndDestructor();
	testAttackWithEnergy();
	testAttackWithoutEnergy();
	testRepairWithEnergy();
	testRepairWithoutEnergy();
	testTakeDamage();
	testFatalDamage();

	return 0;
}

