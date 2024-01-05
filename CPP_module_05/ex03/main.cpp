/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:34:41 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 08:40:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;

	std::cout << YELLOW << "\nTesting creation of Shrubbery Creation Form" << RESET << std::endl;
	AForm *form1 = intern.makeForm("shrubbery creation", "home");
	if (form1 != NULL)
	{
		std::cout << *form1 << std::endl;
		delete form1;
	}

	std::cout << YELLOW << "\nTesting creation of Robotomy Request Form" << RESET << std::endl;
	AForm *form2 = intern.makeForm("robotomy request", "Bender");
	if (form2 != NULL)
	{
		std::cout << *form2 << std::endl;
		delete form2;
	}

	std::cout << YELLOW << "\nTesting creation of Presidential Pardon Form" << RESET << std::endl;
	AForm *form3 = intern.makeForm("presidential pardon", "Alice");
	if (form3 != NULL)
	{
		std::cout << *form3 << std::endl;
		delete form3;
	}

	std::cout << YELLOW << "\nTesting creation with an unknown form type" << RESET << std::endl;
	AForm *form4 = intern.makeForm("unknown form", "Target");
	if (form4 != NULL)
	{
		std::cout << *form4 << std::endl;
		delete form4;
	}

	return 0;
}
