/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:04:06 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 10:11:49 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	// Creation d'un zombie sur la heap
	std::cout << "Creation d'un zombie Georges sur le heap." << std ::endl;
	Zombie *zombie1 = newZombie("Georges");
	zombie1->announce();

	delete zombie1;

	// Creation d'un zombie sur la stack
	std::cout << "Creation d'un zombie Valentin sur la stack." << std::endl;
	randomChump("Valentin");

	return 0;
}