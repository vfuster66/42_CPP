/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:48:48 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 12:37:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	Zombie::_count = 0;

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Zombie::Zombie() : _name("Zombie") {
	_count++;
	std::cout <<_name << " " << _count << " is being created" << std::endl;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Zombie::~Zombie() {
	_count++;
	std::cout <<_name << " " << _count << " is being destroyed" << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void	Zombie::announce(void) {
	_count++;
	std::cout << _name << " " << _count << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

// Permet de definir ou de changer le nom du zombie
void Zombie::setName(const std::string& name) {
	_name = name;
}
