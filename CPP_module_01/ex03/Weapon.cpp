/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:47:25 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 14:27:56 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() const {
	return _type;
}

void Weapon::setType(const std::string &type) {
	_type = type;
}