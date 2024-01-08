/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 11:56:35 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void testDiamondTrap()
{
	// Test de construction et de destruction
	std::cout << "\n--- Test DiamondTrap Construction & Destruction ---" << std::endl;
	DiamondTrap diamondtrap("Diammy");

	// Test d'attaque
	std::cout << "\n--- Test DiamondTrap Attack ---" << std::endl;
	diamondtrap.attack("Enemy");

	// Test de prise de dégâts
	std::cout << "\n--- Test DiamondTrap Take Damage ---" << std::endl;
	diamondtrap.takeDamage(20);

	// Test de réparation
	std::cout << "\n--- Test DiamondTrap Repair ---" << std::endl;
	diamondtrap.beRepaired(10);

	// Test avec Hit Points insuffisants
	std::cout << "\n--- Test DiamondTrap with Insufficient Hit Points ---" << std::endl;
	DiamondTrap weakCT("WeakCT");
	weakCT.takeDamage(200);
	weakCT.attack("Enemy");

	// Test avec Energy Points insuffisants
	std::cout << "\n--- Test DiamondTrap with Insufficient Energy Points ---" << std::endl;
	DiamondTrap tiredCT("TiredCT");
	for (int i = 0; i < 101; i++)
	{
		tiredCT.attack("Enemy");
	}

	// Test avec Attack Damage à 0
	std::cout << "\n--- Test DiamondTrap with Zero Attack Damage ---" << std::endl;
	DiamondTrap weakAttackCT("WeakAttackCT");
	weakAttackCT.setAttackDamage(0);
	weakAttackCT.attack("Enemy");

	// Appel de la fonction whoAmI()
	std::cout << "\n--- Test DiamondTrap whoAmI() ---" << std::endl;
	diamondtrap.whoAmI();
}

int main()
{
	testDiamondTrap();

	return 0;
}




