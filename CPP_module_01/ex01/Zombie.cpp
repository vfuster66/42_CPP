/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:48:48 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:41:54 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	Zombie::_count = 0;

Zombie::Zombie() : _name("Zombie")
{
	_count++;

	std::cout <<_name << " " << _count << " is being created" << std::endl;
}

Zombie::~Zombie()
{
	_count++;

	std::cout <<_name << " " << _count << " is being destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	_count++;

	std::cout << _name << " " << _count << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
	_name = name;
}
