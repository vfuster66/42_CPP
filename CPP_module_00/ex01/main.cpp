/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:47:08 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/20 14:20:23 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <limits>

int	main() {
	// Initialisation d'un objet PhoneBook
	PhoneBook	phoneBook;
	std::string	command;

	// Boucle infinie
	while(true) {
		std::cout << "Enter Command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue ;
		}

		if (command == "EXIT") {
			break ;
		}
		else if (command == "ADD") {
			phoneBook.addContact();
			
		}
		else if (command == "SEARCH") {
			phoneBook.searchContact();
			
		}
		else {
			std::cout << "Invalid command, possible choices are ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}
