/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:17:30 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:26:10 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
			: AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
			: AForm(other), _target(other._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<std::string&>(_target) = other._target;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outputFile(_target + "_shrubbery");
	if (!outputFile)
	{
		throw std::runtime_error("Failed to create the shrubbery file");
	}

	outputFile << "ASCII art of shrubbery...\n";
	outputFile.close();
}