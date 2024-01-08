/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:42:17 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 12:00:15 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void testClapTrap()
{
	// Test de construction et de destruction
	std::cout << "\n--- Test ClapTrap Construction & Destruction ---" << std::endl;
	ClapTrap claptrap("Clappy");

	// Test d'attaque
	std::cout << "\n--- Test ClapTrap Attack ---" << std::endl;
	claptrap.setAttackDamage(10);
	claptrap.attack("Enemy");

	// Test de prise de dégâts
	std::cout << "\n--- Test ClapTrap Take Damage ---" << std::endl;
	claptrap.takeDamage(5);

	// Test de réparation
	std::cout << "\n--- Test ClapTrap Repair ---" << std::endl;
	claptrap.beRepaired(7);

	// Test ClapTrap avec Hit Points insuffisants
	std::cout << "\n--- Test ClapTrap with Insufficient Hit Points ---" << std::endl;
	ClapTrap weakCT("WeakCT");
	weakCT.takeDamage(10);
	weakCT.attack("Enemy");

	// Test ClapTrap avec Energy Points insuffisants
	std::cout << "\n--- Test ClapTrap with Insufficient Energy Points ---" << std::endl;
	ClapTrap tiredCT("TiredCT");
	tiredCT.setAttackDamage(5);
	for (int i = 0; i < 11; i++)
	{
		tiredCT.attack("Enemy");
	}

	// Test ClapTrap avec Attack Damage à 0
	std::cout << "\n--- Test ClapTrap with Zero Attack Damage ---" << std::endl;
	ClapTrap weakAttackCT("WeakAttackCT");
	weakAttackCT.setAttackDamage(0);
	weakAttackCT.attack("Enemy");
}

int main()
{
	testClapTrap();

	return 0;
}

