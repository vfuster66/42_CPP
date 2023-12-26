/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:50:36 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:00:53 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{

public:
	HumanB(const std::string &name);

	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack() const;

private:
	std::string _name;
	Weapon *_weapon;

};

#endif
