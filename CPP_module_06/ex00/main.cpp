/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:06:39 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 16:01:01 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <exception>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <value to convert>" << std::endl;
		
		return 1;
	}

	ScalarConverter converter(argv[1]);
	
	try
	{
		char c = converter.toChar();
		
		std::cout << "Char: " << c << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Char: impossible" << std::endl;
	}

	try
	{
		int num = converter.toInt();
		
		std::cout << "Int: " << num << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Int: impossible" << std::endl;
	}

	try
	{
		float f = converter.toFloat();
		
		std::cout << "Float: " << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Float: impossible" << std::endl;
	}

	try
	{
		double d = converter.toDouble();
		
		std::cout << "Double: " << d << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Double: impossible" << std::endl;
	}

	std::cout << std::endl;

	return 0;
}



