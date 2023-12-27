/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:10:42 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 14:32:25 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);

	ScavTrap &operator=(const ScavTrap &other);
	
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate();

};

#endif