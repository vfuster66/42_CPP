/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:46:30 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/15 14:39:18 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <iomanip>

class ScalarConverter
{

public:
	static void convert(const std::string &literal);

private:
	ScalarConverter();
	~ScalarConverter();

	// Méthodes privées pour la conversion vers chaque type
	static char _toChar(double value);
	static int _toInt(double value);
	static float _toFloat(double value);
	static double _toDouble(const std::string &literal);

	// Méthodes utilitaires
	static bool _isDisplayable(char c);
	static bool _isPseudoLiteral(const std::string &literal);
	static bool isNan(double value);
	static bool isInf(double value);
	static std::string _toString(char c);
	static std::string _toString(int i);
	static std::string _toString(float f);
	static std::string _toString(double d);

};

#endif
