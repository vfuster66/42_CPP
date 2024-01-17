/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:35:40 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 17:27:24 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	int intArray[] = { 1, 2, 3, 4, 5 };
	float floatArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	std::string stringArray[] = { "Hello", "World", "C++", "Templates" };

	std::cout << "Testing with intArray:" << std::endl;
	iter(intArray, 5, print<int>);

	std::cout << "\nTesting with floatArray:" << std::endl;
	iter(floatArray, 5, print<float>);

	std::cout << "\nTesting with stringArray:" << std::endl;
	iter(stringArray, 4, print<std::string>);

	return 0;
}
