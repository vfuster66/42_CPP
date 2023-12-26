/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:48:15 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 12:39:32 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int N = 5;
	std::string name = "Zombie";

	std::cout << YELLOW << "Creating Zombie Horde..." << RESET <<std::endl;
	Zombie* horde = zombieHorde(N, name);
	std::cout << std::endl;

	std::cout << YELLOW << "Zombie Horde Announcing..." << RESET << std::endl;
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	std::cout << std::endl;
	
	std::cout << YELLOW << "Destroying Zombie Horde..." << RESET << std::endl;
	Zombie::resetCount();
	delete[] horde;
	return 0;
}