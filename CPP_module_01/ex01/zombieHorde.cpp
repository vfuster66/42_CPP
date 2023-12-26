/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:49:03 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 12:24:48 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}
	Zombie::resetCount();
	return horde;
}
