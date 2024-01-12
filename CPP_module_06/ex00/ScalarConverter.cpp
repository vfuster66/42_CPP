/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:48:42 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/12 11:40:15 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

// convertir en char
char ScalarConverter::convertToChar(double value)
{
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
    {
        throw std::runtime_error("impossible");
    }
    char c = static_cast<char>(value);
    if (!isprint(c))
    {
        throw std::runtime_error("Non displayable");
    }
    return c;
}

// convertir en int
int ScalarConverter::convertToInt(double value)
{
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value))
	{
		throw std::runtime_error("impossible");
	}
	return static_cast<int>(value);
}

// convertir en float
float ScalarConverter::convertToFloat(double value) {
    if (std::isnan(value)) {
        return std::numeric_limits<float>::quiet_NaN();
    }

    if (std::isinf(value)) {
        if (value > 0) {
            return std::numeric_limits<float>::infinity();
        } else {
            return -std::numeric_limits<float>::infinity();
        }
    }

    if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max()) {
        throw std::runtime_error("impossible");
    }

    return static_cast<float>(value);
}


// convertir en double
double ScalarConverter::convertToDouble(const std::string& literal)
{
    if (literal.length() == 1 && isalpha(literal[0]))
    {
        return static_cast<double>(literal[0]);
    }
    else if (literal.length() == 1 && isdigit(literal[0]))
    {
        return static_cast<double>(literal[0] - '0');
    }
	std::istringstream iss(literal);
	double value;
	iss >> value;

	if (literal == "nan" || literal == "nanf")
	{
		return std::numeric_limits<double>::quiet_NaN();
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		return std::numeric_limits<double>::infinity();
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		return -std::numeric_limits<double>::infinity();
	}

	if (iss.fail())
	{
		throw std::runtime_error("impossible");
	}

	return value;
}

void ScalarConverter::convert(const std::string& literal)
{
	double baseValue;

	try
	{
		baseValue = convertToDouble(literal);
	}
	catch (const std::exception& e)
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return;
	}

	try
	{
		char c = convertToChar(baseValue);
		std::cout << "char: '" << c << "'\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "char: " << e.what() << '\n';
	}

	try
	{
		int i = convertToInt(baseValue);
		std::cout << "int: " << i << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "int: " << e.what() << '\n';
	}

	try
	{
		float f = convertToFloat(baseValue);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << f << "f\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "float: " << e.what() << '\n';
	}

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double: " << baseValue << "\n";
}
