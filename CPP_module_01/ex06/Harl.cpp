/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:59:30 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/22 08:56:21 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Harl::Harl() {}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Harl::~Harl() {}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void Harl::debug(void) {
	std::cout << BLUE << "[DEBUG]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << GREEN << "[INFO]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << YELLOW << "[WARNING]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << RED << "[ERROR]" << RESET << std::endl;
	std:: cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filterComplaints(std::string level) {
	void (Harl::*complaints[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int levelIndex = 0;
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			levelIndex = i;
			break;
		}
	}

	switch (levelIndex) {
		case 0:
			(this->*complaints[0])();
			//fall through
		case 1:
			(this->*complaints[1])();
			//fall through
		case 2:
			(this->*complaints[2])();
			//fall through
		case 3:
			(this->*complaints[3])();
			break;
		default:
			std::cout << "Unknown level: " << level << std::endl;
	}
}
