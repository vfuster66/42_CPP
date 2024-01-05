/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:08:25 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 07:50:15 by vfuster-         ###   ########.fr       */
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

		std::cout << chief << std::endl;
		std::cout << taxForm << std::endl;

		taxForm.beSigned(chief);
		std::cout << "After signing: " << taxForm << std::endl;
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
		std::cout << intern << std::endl;

		permissionForm.beSigned(intern);
		std::cout << "After signing: " << permissionForm << std::endl;
    }

	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}

