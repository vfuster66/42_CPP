/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:46:30 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/12 10:54:04 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class ScalarConverter
{

public:
	static void convert(const std::string& literal);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter&);

	ScalarConverter& operator=(const ScalarConverter&);

	~ScalarConverter();

	static char convertToChar(double value);
	static int convertToInt(double value);
	static float convertToFloat(double value);
	static double convertToDouble(const std::string& literal);
};

#endif
