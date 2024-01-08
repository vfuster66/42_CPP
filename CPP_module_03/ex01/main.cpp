/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 12:01:18 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void testScavTrap()
{
	// Test de construction et de destruction
	std::cout << "\n--- Test ScavTrap Construction & Destruction ---" << std::endl;
	ScavTrap scavtrap("Scavvy");

	// Test d'attaque
	std::cout << "\n--- Test ScavTrap Attack ---" << std::endl;
	scavtrap.setAttackDamage(15);
	scavtrap.attack("Enemy");

	// Test de prise de dégâts
	std::cout << "\n--- Test ScavTrap Take Damage ---" << std::endl;
	scavtrap.takeDamage(10);

	// Test de réparation
	std::cout << "\n--- Test ScavTrap Repair ---" << std::endl;
	scavtrap.beRepaired(5);

	// Test du mode gardien de porte
	std::cout << "\n--- Test ScavTrap Gate Keeper Mode ---" << std::endl;
	scavtrap.guardGate();

	// Test avec Hit Points insuffisants
	std::cout << "\n--- Test ScavTrap with Insufficient Hit Points ---" << std::endl;
	ScavTrap weakCT("WeakCT");
	weakCT.takeDamage(100);
	weakCT.attack("Enemy");

	// Test avec Energy Points insuffisants
	std::cout << "\n--- Test ScavTrap with Insufficient Energy Points ---" << std::endl;
	ScavTrap tiredCT("TiredCT");
	for (int i = 0; i < 51; i++)
	{
		tiredCT.attack("Enemy");
	}

	// Test avec Attack Damage à 0
	std::cout << "\n--- Test ScavTrap with Zero Attack Damage ---" << std::endl;
	ScavTrap weakAttackCT("WeakAttackCT");
	weakAttackCT.setAttackDamage(0);
	weakAttackCT.attack("Enemy");
}

int main()
{
	testScavTrap();

	return 0;
}
