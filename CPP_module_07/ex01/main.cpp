/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:35:40 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 16:46:53 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>

void Iter<T>::iter(T* array, int length, void (*f)(const T&))
{
	if (array == nullptr)
	{
		std::cerr << "Erreur : Tableau nul." << std::endl;
		return ;
	}

	if (length <= 0)
	{
		std::cerr << "Erreur : Longueur du tableau invalide." << std::endl;
		return ;
	}

	if (f == nullptr)
	{
		std::cerr << "Erreur : Pointeur de fonction nul." << std::endl;
		return ;
	}

	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}


template class Iter<int>;
template class Iter<double>;

template<typename T>

void printElement(const T& elem)
{
	std::cout << elem << std::endl;
}

void doubleElement(const int& elem)
{
	std::cout << elem * 2 << std::endl;
}

void printString(const std::string& str)
{
	std::cout << str << std::endl;
}

void printChar(const char& c)
{
	std::cout << c << std::endl;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string stringArray[] = {"Hello", "World", "C++", "Programming", "Test"};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "\nTest 1: Affichage du tableau int:" << std::endl;
	Iter<int>::iter(intArray, 5, printElement);

	std::cout << "\nTest 2: Double des éléments du tableau int:" << std::endl;
	Iter<int>::iter(intArray, 5, doubleElement);

	std::cout << "\nTest 3: Affichage du tableau double:" << std::endl;
	Iter<double>::iter(doubleArray, 5, printElement);

	std::cout << "\nTest 4: Affichage du tableau de chaînes de caractères:" << std::endl;
	Iter<std::string>::iter(stringArray, 5, printString);

	std::cout << "\nTest 5: Affichage du tableau de caractères:" << std::endl;
	Iter<char>::iter(charArray, 5, printChar);

	std::cout << "\nTest 6: Tentative avec un tableau nul:" << std::endl;
	Iter<int>::iter(nullptr, 5, printElement);

	std::cout << "\nTest 7: Tentative avec une longueur négative:" << std::endl;
	Iter<int>::iter(intArray, -5, printElement);

	std::cout << "\nTest 8: Tentative avec un pointeur de fonction nul:" << std::endl;
	Iter<int>::iter(intArray, 5, nullptr);

	return 0;
}

