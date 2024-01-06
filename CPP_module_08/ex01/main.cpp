/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:59:19 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 18:10:16 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp(5);

	std::cout << "Ajout de nombres dans le Span." << std::endl;

	try
	{
		sp.addNumber(5);
		std::cout << "Nombre 5 ajouté." << std::endl;
		sp.addNumber(3);
		std::cout << "Nombre 3 ajouté." << std::endl;
		sp.addNumber(17);
		std::cout << "Nombre 17 ajouté." << std::endl;
		sp.addNumber(9);
		std::cout << "Nombre 9 ajouté." << std::endl;
		sp.addNumber(11);
		std::cout << "Nombre 11 ajouté." << std::endl;

		std::cout << "\nCalcul du span le plus court." << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

		std::cout << "\nCalcul du span le plus long." << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		std::cout << "\nTentative d'ajout d'un autre nombre (doit échouer)." << std::endl;
		sp.addNumber(19); // Devrait lever une exception
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

