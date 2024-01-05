/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:00:53 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 08:24:39 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::map<std::string, AForm* (*)(const std::string&)> Intern::formCreators;

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Intern::Intern()
{
	formCreators["shrubbery creation"] = &ShrubberyCreationForm::create;
	formCreators["robotomy request"] = &RobotomyRequestForm::create;
	formCreators["presidential pardon"] = &PresidentialPardonForm::create;
}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Intern::~Intern()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	std::map<std::string, AForm* (*)(const std::string&)>::const_iterator it = formCreators.find(formName);

	if (it != formCreators.end())
	{
		std::cout << "Intern creates " << formName << std::endl;
		return it->second(target);
	}
	else
	{
		std::cerr << "Intern couldn't create form: " << formName << std::endl;
		return NULL;
	}
}