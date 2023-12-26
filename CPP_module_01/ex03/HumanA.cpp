/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:50:09 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 14:44:34 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

// Initialisation d'un objet HumanA qui prend 2 parametres :
// name		-> une reference constante a une std::string
// weapon 	-> une reference a un objet Weapon
// Liste d'initialisation pour assigner name a _name et weapon a _weapon
// Cela permet que chaque objet HumanA aura un nom et utilisera l'arme
// passee au constructeur.

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon) {}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

HumanA::~HumanA() {}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

// Methode utilisee pour simuler une attaque par l'objet HumanA
// const	-> ne modifie pas l'etat de l'objet HumanA

void HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
