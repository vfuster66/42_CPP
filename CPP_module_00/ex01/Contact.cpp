/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:30:24 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:15:15 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/************************************************************************
*			CONSTRUCTEUR					*
************************************************************************/

Contact::Contact() {}

/************************************************************************
*			DESTRUCTEUR					*
************************************************************************/

Contact::~Contact() {}

/************************************************************************
*			FONCTIONS					*
************************************************************************/

// METHODES GETTER //

// Declarees 'const' -> ne modifient pas l'etat de l'objet

std::string Contact::getFirstName() const {
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickname;
}

std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return _darkestSecret;
}

// METHODES SETTER //

// Prend un argument et l'assigne a l'attribut correspondant

void Contact::setFirstName(const std::string &fname) {
    _firstName = fname;
}

void Contact::setLastName(const std::string &lname) {
    _lastName = lname;
}

void Contact::setNickname(const std::string &nname) {
    _nickname = nname;
}

void Contact::setPhoneNumber(const std::string &pnumber) {
    _phoneNumber = pnumber;
}

void Contact::setDarkestSecret(const std::string &dsecret) {
    _darkestSecret = dsecret;
}
