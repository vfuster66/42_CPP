/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 11:21:20 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void testFragTrap()
{
	// Test de construction et de destruction
	std::cout << "\n--- Test FragTrap Construction & Destruction ---" << std::endl;
	FragTrap fragtrap("Fraggy");

	// Test d'attaque
	std::cout << "\n--- Test FragTrap Attack ---" << std::endl;
	fragtrap.attack("Enemy");

	// Test de prise de dégâts
	std::cout << "\n--- Test FragTrap Take Damage ---" << std::endl;
	fragtrap.takeDamage(20);

	// Test de réparation
	std::cout << "\n--- Test FragTrap Repair ---" << std::endl;
	fragtrap.beRepaired(10);

	// Test avec Hit Points insuffisants
	std::cout << "\n--- Test FragTrap with Insufficient Hit Points ---" << std::endl;
	FragTrap weakCT("WeakCT");
	weakCT.takeDamage(200);
	weakCT.attack("Enemy");

	// Test avec Energy Points insuffisants
	std::cout << "\n--- Test FragTrap with Insufficient Energy Points ---" << std::endl;
	FragTrap tiredCT("TiredCT");
	for (int i = 0; i < 101; i++)
	{
		tiredCT.attack("Enemy");
	}

	// Test avec Attack Damage à 0
	std::cout << "\n--- Test FragTrap with Zero Attack Damage ---" << std::endl;
	FragTrap weakAttackCT("WeakAttackCT");
	weakAttackCT.setAttackDamage(0);
	weakAttackCT.attack("Enemy");

	// Test de la capacité spéciale
	std::cout << "\n--- Test FragTrap High Five Request ---" << std::endl;
	fragtrap.highFivesGuys();
}

int main()
{
	testFragTrap();

	return 0;
}
