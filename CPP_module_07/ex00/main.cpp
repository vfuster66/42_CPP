/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:01:16 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/09 15:04:07 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << "----------- Test swap avec int ----------- :" << std::endl;
	std::cout << "Avant swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "Après swap: a = " << a << ", b = " << b << std::endl;

	std::cout << "\n----------- Test min et max pour int ----------- :" << std::endl;
	std::cout << "Test min et max pour int:" << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\n----------- Test swap avec string ----------- :" << std::endl;
	std::cout << "\nAvant swap: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Après swap: c = " << c << ", d = " << d << std::endl;

	std::cout << "\n----------- Test min et max pour string int ----------- :" << std::endl;
	std::cout << "Test min et max pour std::string:" << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	return 0;
}