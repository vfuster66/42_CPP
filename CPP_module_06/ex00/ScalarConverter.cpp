/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:48:42 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/15 14:36:16 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string &literal)
{
    if (_isPseudoLiteral(literal))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;

        bool isFloatSpecificLiteral = (literal == "nanf" || literal == "+inff" || literal == "-inff");

        if (isFloatSpecificLiteral)
        {
            std::cout << "float: " << literal << std::endl;
        }
        else
        {
            std::cout << "float: " << literal << "f" << std::endl;
        }

        std::string doubleLiteral;
        if (isFloatSpecificLiteral) {
            doubleLiteral = literal.substr(0, literal.size() - 1);
        }
        else
        {
            doubleLiteral = literal;
        }
        std::cout << "double: " << doubleLiteral << std::endl;
    }
    else if (literal.length() == 1 && std::isalpha(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
    else
    {
        double value = _toDouble(literal);

        try
        {
            std::cout << "char: " << _toString(_toChar(value)) << std::endl;
        }
        catch (const std::exception&)
        {
            std::cout << "char: impossible" << std::endl;
        }

        try
        {
            std::cout << "int: " << _toString(_toInt(value)) << std::endl;
        }
        catch (const std::exception&)
        {
            std::cout << "int: impossible" << std::endl;
        }

        try
        {
            std::cout << "float: " << _toString(_toFloat(value)) << std::endl;
        }
        catch (const std::exception&)
        {
        std::cout << "float: impossible" << std::endl;
        }

        std::cout << "double: " << _toString(value) << std::endl;
    }
}

bool ScalarConverter::_isDisplayable(char c)
{
    return c >= 32 && c < 127;
}

bool ScalarConverter::_isPseudoLiteral(const std::string &literal)
{
    return literal == "-inf" || literal == "+inf" || literal == "nan"
            || literal == "-inff" || literal == "+inff" || literal == "nanf";
}

// Une valeur est NaN si elle n'est pas égale à elle-même
bool ScalarConverter::isNan(double value)
{
    return value != value;
}

// Une valeur est infinie si elle dépasse les limites maximales ou minimales du type double
bool ScalarConverter::isInf(double value)
{
    return value > std::numeric_limits<double>::max() || value < -std::numeric_limits<double>::max();
}

std::string ScalarConverter::_toString(char c)
{
    if (_isPseudoLiteral(std::string(1, c)))
    {
        return "impossible";
    }
    else if (_isDisplayable(c))
    {
        return "'" + std::string(1, c) + "'";
    }
    return "Non displayable";
}

std::string ScalarConverter::_toString(int i)
{
    std::ostringstream ss;
    ss << i;
    return ss.str();
}

std::string ScalarConverter::_toString(float f)
{
    std::ostringstream ss;
    ss << std::fixed << std::setprecision(1);
    ss << f;
    std::string floatStr = ss.str();

    if (_isPseudoLiteral(floatStr))
    {
        return floatStr;
    }
    return floatStr + "f";
}

std::string ScalarConverter::_toString(double d)
{
    std::ostringstream ss;
    ss << std::fixed << std::setprecision(1);
    ss << d;
    std::string doubleStr = ss.str();

    if (_isPseudoLiteral(doubleStr))
    {
        size_t fPos = doubleStr.find('f');

        if (fPos != std::string::npos)
        {
            doubleStr.erase(fPos, 1);
        }
        return doubleStr;
    }

    return doubleStr;
}

char ScalarConverter::_toChar(double value)
{
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max()
            || isNan(value) || isInf(value))
    {
        throw std::range_error("Conversion to char impossible");
    }

    return static_cast<char>(value);
}

int ScalarConverter::_toInt(double value)
{
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || isNan(value) || isInf(value))
    {
        throw std::range_error("Conversion to int impossible");
    }

    return static_cast<int>(value);
}

float ScalarConverter::_toFloat(double value)
{
    if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
    {
        throw std::range_error("Conversion to float impossible");
    }

    return static_cast<float>(value);
}

double ScalarConverter::_toDouble(const std::string &literal)
{
    if (_isPseudoLiteral(literal))
    {
        if (literal == "-inf" || literal == "-inff") return -std::numeric_limits<double>::infinity();
        if (literal == "+inf" || literal == "+inff") return std::numeric_limits<double>::infinity();
        if (literal == "nan" || literal == "nanf") return std::numeric_limits<double>::quiet_NaN();
    }

    std::istringstream iss(literal);
    double value;
    iss >> value;

    if (iss.fail())
    {
        throw std::invalid_argument("Invalid literal for conversion");
    }

    return value;
}
