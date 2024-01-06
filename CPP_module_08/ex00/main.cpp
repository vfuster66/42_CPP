/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:43:06 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 17:55:20 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <iostream>

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	std::cout << "Test avec la valeur 3 (présente dans le vecteur) : " << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Valeur trouvée : " << *it << " à la position " << (it - vec.begin()) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Valeur non trouvée." << std::endl;
	}

	std::cout << "\nTest avec la valeur 6 (absente du vecteur) : " << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Valeur trouvée : " << *it << " à la position " << (it - vec.begin()) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Valeur non trouvée." << std::endl;
	}

	return 0;
}

