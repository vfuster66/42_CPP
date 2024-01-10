/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:08:25 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/10 09:20:09 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat chief("Chief", 2);
		Form taxForm("TaxForm", 5, 10);

		std::cout << "-------------------------\n";
		std::cout << "Bureaucrat: " << chief << std::endl;
		std::cout << "Form: " << taxForm << std::endl;
		std::cout << "Action: Attempting to Sign\n";

		chief.signForm(taxForm);
		std::cout << "Result: Success\n";
		std::cout << "Updated Form Status: " << taxForm << "\n";
	std::cout << "-------------------------\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat intern("Intern", 150);
		Form permissionForm("PermissionForm", 140, 145);

		intern.incrementGrade();
		std::cout << "-------------------------\n";
		std::cout << "Bureaucrat: " << intern << std::endl;
		std::cout << "Form: " << permissionForm << std::endl;
		std::cout << "Action: Attempting to Sign\n";

		intern.signForm(permissionForm);
		std::cout << "Updated Form Status: " << permissionForm << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "Result: Failure - Exception: " << e.what() << "\n";
		std::cout << "-------------------------\n";
	}

	return 0;
}
