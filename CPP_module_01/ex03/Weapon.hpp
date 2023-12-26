/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:46:55 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:02:51 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

public:
	Weapon(const std::string &type);

	~Weapon();

	const std::string &getType() const;
	void setType(const std::string &type);

private:
	std::string _type;

};

#endif
