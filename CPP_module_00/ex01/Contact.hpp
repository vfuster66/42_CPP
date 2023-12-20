/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:06:38 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/20 11:59:43 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

// Declaration de classe
class Contact {

// Membres publics
public:
    // Constructeur
    Contact();
    // Destructeur
    ~Contact();

    // Getter fonctions de lecture - retournent les variables membres correspondantes
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    // Setter fonctions d'ecriture - definissent les valeurs des variables membres
    void setFirstName(const std::string &fname);
    void setLastName(const std::string &lname);
    void setNickname(const std::string &nname);
    void setPhoneNumber(const std::string &pnumber);
    void setDarkestSecret(const std::string &dsecret);

// Membres prives
private:
    // Attributs prives pour stocker les donnees correspondantes
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif
