/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:34:41 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 07:57:15 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

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

        std::cout << YELLOW << "\nInitial bureaucrat and form status:" << RESET << std::endl;
        std::cout << chief << std::endl;
        std::cout << intern << std::endl;
        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        // Chief signs and executes forms
        std::cout << GREEN << "\n----- Chief's Actions -----" << "\033[0m" << std::endl;
        chief.signForm(shrubberyForm);
        chief.signForm(robotomyForm);
        chief.signForm(pardonForm);
        std::cout << YELLOW << "\nAfter signing forms:" << RESET << std::endl;
        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;
        chief.executeForm(shrubberyForm);
        chief.executeForm(robotomyForm);
        chief.executeForm(pardonForm);

        // Intern tries to sign and execute
        std::cout << GREEN << "\n----- Intern's Actions -----" << "\033[0m" << std::endl;
        intern.signForm(shrubberyForm);
        intern.executeForm(shrubberyForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}


