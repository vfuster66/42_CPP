/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:08:25 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 11:23:24 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "\nTesting with a valid grade: " << std::endl;

		Bureaucrat john("John Doe", 50);
		std::cout << john << std::endl;

		std::cout << "\nIncreasing the grade: " << std::endl;
		
		john.incrementGrade();
		std::cout << john << std::endl;

		std::cout << "\nDecreasing the grade: " << std::endl;
		
		john.decrementGrade();
		std::cout << john << std::endl;
	}
	
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nTesting with a grade too high: " << std::endl;
		
		Bureaucrat boss("Boss", 0);
		std::cout << boss << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nTesting with a grade too low: " << std::endl;

		Bureaucrat intern("Intern", 151);
		std::cout << intern << std::endl;
	}

	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
