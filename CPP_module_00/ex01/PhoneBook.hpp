/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:12:54 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/20 13:40:39 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

// Declaration de la classe
class PhoneBook {

// Membres publics
public:
	// Constructeur de la classe
	PhoneBook();
	// Destructeur de la classe
	~PhoneBook();

	// Methode pour ajouter un contact
	void addContact();
	// Methode pour afficher les contacts stockes
	void displayContacts();
	// Methode pour rechercher un contact specifique
	void searchContact();

// Membres prives
private:
	// Tableau de 8 objets
	Contact _contacts[8];
	// Indice pour suivre le nombre de contacts
	int _contactIndex;

	// Methode pour tronquer une chaine de caracteres
	std::string _truncateString(std::string str) const;
};

#endif
