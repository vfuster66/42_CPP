/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:00:53 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 11:56:28 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Intern::Intern()
{
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

// Initialisation du tableau des créateurs de formulaires
const Intern::FormCreator Intern::formCreators[] =
{
	&ShrubberyCreationForm::create,
	&RobotomyRequestForm::create,
	&PresidentialPardonForm::create
};

// Initialisation du tableau des noms de formulaires
const std::string Intern::formNames[] =
{
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

const int Intern::formCount = sizeof(formCreators) / sizeof(FormCreator);

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	for (int i = 0; i < formCount; ++i)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formCreators[i](target);
		}
	}

	std::cerr << "Intern couldn't create form: " << formName << std::endl;
	return NULL;
}