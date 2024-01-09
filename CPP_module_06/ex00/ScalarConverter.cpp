/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:48:42 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 14:35:55 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

ScalarConverter::ScalarConverter() : _value("")
{
}

ScalarConverter::ScalarConverter(const std::string& value) : _value(value)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) : _value(other._value)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this != &other)
	{
		this->_value = other._value;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

ScalarConverter::~ScalarConverter()
{
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

char ScalarConverter::toChar() const
{
	if (_value.empty())
	{
		throw std::runtime_error("Empty string");
	}

	if (_value.length() == 1 && std::isprint(_value[0]))
	{
		return _value[0];
	}

	long num = std::strtol(_value.c_str(), NULL, 10);

	if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max())
	{
		throw std::runtime_error("Char conversion out of range");
	}

	char result = static_cast<char>(num);
	if (!std::isprint(result))
	{
		throw std::runtime_error("Non displayable character");
	}

	return result;
}

int ScalarConverter::toInt() const
{
	if (_value.empty())
	{
		throw std::runtime_error("Empty string");
	}

	char* end;
	long num = std::strtol(_value.c_str(), &end, 10);

	if (*end != '\0')
	{
		throw std::runtime_error("Int conversion invalid");
	}

	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
	{
		throw std::runtime_error("Int conversion out of range");
	}

	return static_cast<int>(num);
}

float ScalarConverter::toFloat() const
{
	if (_value.empty())
	{
		throw std::runtime_error("Empty string");
	}

	char* end;
	float num = static_cast<float>(strtod(_value.c_str(), &end));

	if (*end != '\0')
	{
		throw std::runtime_error("Float conversion invalid");
	}

	return num;
}

double ScalarConverter::toDouble() const
{
	if (_value.empty())
	{
		throw std::runtime_error("Empty string");
	}

	char* end;
	double num = std::strtod(_value.c_str(), &end);

	if (*end != '\0')
	{
		throw std::runtime_error("Double conversion invalid");
	}

	return num;
}
