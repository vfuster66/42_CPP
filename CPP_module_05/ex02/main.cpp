/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:34:41 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 17:36:43 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		// Create bureaucrats
		Bureaucrat chief("Chief", 2);
		Bureaucrat intern("Intern", 150);

		// Create forms
		ShrubberyCreationForm shrubberyForm("Home");
		RobotomyRequestForm robotomyForm("John");
		PresidentialPardonForm pardonForm("Alice");

		std::cout << "Initial bureaucrat and form status:" << std::endl;
		std::cout << chief << std::endl;
		std::cout << intern << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		// Attempt to execute forms
		chief.signForm(shrubberyForm);
		chief.signForm(robotomyForm);
		chief.signForm(pardonForm);

		std::cout << "\nAfter signing forms:" << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		chief.executeForm(shrubberyForm);
		chief.executeForm(robotomyForm);
		chief.executeForm(pardonForm);

		// Attempt to sign and execute with intern (grade 150)
		intern.signForm(shrubberyForm);
		intern.executeForm(shrubberyForm);

	}

	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
