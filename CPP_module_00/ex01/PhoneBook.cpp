/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:36:13 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/20 14:27:27 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************************************
 * bibliotheque <string>													 *
 * std::string::length	-> renvoie la longueur de la chaine de caracteres	 *
 * std::string::substr	-> renvoie une sous-chaine de la chaine originale.	 *
 * 							parametres: position de debut et longueur de la	 *
 * 							sous-chaine a extraire							 *
 * std::getline			-> utilise pour lire une ligne de texte depuis		 *
 * 							le flux d'entree								 *
 * 																			 *
 * bibliotheque <iostream>													 *
 * std::cin.fail() 		-> utilise pour verifier si une operation d'entree 	 *
 * 							precedente a echoue. 							 *
 * std::cin.clear(); 	-> utilise pour reinitialiser l'etat d'un flux		 *
 * std::cin.ignore		-> utilise pour ignorer des caracteres dans un		 *
 * 							flux d'entree. Souvent utilise pour vider le	 *
 * 							tampon d'entree									 *
 * 																			 *
 * bibliotheque <iomanip>													 *
 * std::setw()			-> utilise pour specifier la largeur de champ pour	 *
 * 							la prochaine operation d'entree/sortie. Souvent	 *
 * 							utilise avec std::cout pour formater l'affichage *
 * 							en definissant le nombre de caracteres
 * 							a utiliser										 *
 * 																			 *
 * bibliotheque <limits>													 *
 * std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 *
 * 						-> permet d'ignorer un nombre maximum de caracteres	 *
 * 							dans le flux d'entree standard jusqu'au retour a *
 * 							la ligne. Technique pour nettoyer le tampon		 *
 * 							d'entree apres une entree invalide				 *
 * index >= std::min(_contactIndex, 8))										 *
 * 						-> utilise ici pour limiter l'index de recherche 	 *
 * 							a la plage des indices valides du tableau		 *
 ****************************************************************************/

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

// Definition constructeur - Initialise l'index des contacts a 0
PhoneBook::PhoneBook() : _contactIndex(0) {}

// Definition destructeur
PhoneBook::~PhoneBook() {}

// Methode pour creer et ajouter un nouveau 'Contact' a l'annuaire
// Les informations sont rentrees par l'utilisateur
void	PhoneBook::addContact() {
	Contact newContact;
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	// Les donnees sont stockees dans le tableau
	// % pour gerer le remplacement des contacts quand la limite est atteinte
	_contacts[_contactIndex % 8] = newContact;
	_contactIndex++;
}

// Methode pour afficher les contacts de l'annuaire
// std::setw(10) pour formater chaque champ a 10 caracteres
void	PhoneBook::displayContacts() {
	int	i = 0;
	while (i < std::min(_contactIndex, 8)) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << _truncateString(_contacts[i].getNickname()) << std::endl;
		i++;
	}
}

// Methode pour rechercher un utilisateur par son index
// Affiche la fiche contact detaillee si l'index est valide
// Gere les erreurs de saisie et les indices invalides
void	PhoneBook::searchContact() {
	displayContacts();
	std::cout << "Enter the index of the contact to view: ";
	int	index;
	std::cin >> index;

	if (std::cin.fail() || index < 0 || index >= std::min(_contactIndex, 8)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	
	Contact &contact = _contacts[index];
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

// Methode pour tronquer les chaines de caracteres a 10 caracteres
// Si une chaine est plus longue, elle est tronquee a 9 caracteres suivis d'un point
std::string PhoneBook::_truncateString(std::string str) const {
	if (str.length() > 10) {
		str = str.substr(0, 9) + ".";
	}
	return str;
}
