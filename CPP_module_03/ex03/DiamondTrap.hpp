/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:48:43 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 11:47:00 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	
	DiamondTrap &operator=(const DiamondTrap &other);
	
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();

private:
	std::string _name;

};

#endif

