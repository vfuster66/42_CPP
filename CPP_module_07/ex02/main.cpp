/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:54:14 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 17:22:27 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main()
{
	std::cout << "Création d'un tableau d'entiers de taille 5." << std::endl;
	Array<int> intArray(5);

	std::cout << "\nAffectation de valeurs aux éléments du tableau." << std::endl;
	for (unsigned int i = 0; i < intArray.getSize(); i++)
	{
		intArray[i] = i * 10;
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}

	std::cout << "\nTest d'accès à un élément valide (index 3)." << std::endl;
	std::cout << "Element at index 3: " << intArray[3] << std::endl;

	std::cout << "\nTest d'accès à un élément hors limites (index 6)." << std::endl;
	try
	{
		std::cout << "Element at index 6: " << intArray[6] << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\nTest de copie de tableau et d'indépendance des copies." << std::endl;
	Array<int> copiedArray = intArray;
	copiedArray[0] = 100;
	std::cout << "Original array element at index 0: " << intArray[0] << std::endl;
	std::cout << "Copied array element at index 0: " << copiedArray[0] << std::endl;

	return 0;
}

