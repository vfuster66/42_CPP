/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:59:19 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 22:03:30 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp(10);

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

		std::cout << "\nAjout d'une série de nombres avec addRange." << std::endl;
		std::vector<int> additionalNumbers;
		additionalNumbers.push_back(20);
		std::cout << "Ajout du nombre 20." << std::endl;
		additionalNumbers.push_back(21);
		std::cout << "Ajout du nombre 21." << std::endl;
		additionalNumbers.push_back(22);
		std::cout << "Ajout du nombre 22." << std::endl;
		additionalNumbers.push_back(23);
		std::cout << "Ajout du nombre 23." << std::endl;
		additionalNumbers.push_back(24);
		std::cout << "Ajout du nombre 24." << std::endl;
		try
		{
			sp.addRange(additionalNumbers.begin(), additionalNumbers.end());
			std::cout << "Nombres supplémentaires ajoutés avec succès." << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception lors de l'ajout de nombres supplémentaires: " << e.what() << std::endl;
		}

		std::cout << "\nTentative d'ajout d'un autre nombre (doit échouer)." << std::endl;
		sp.addNumber(19);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}*/

#include "Span.hpp"
#include <iostream>
#include <cstdlib> // pour std::rand()

int main() {
    const unsigned int N = 10000; // Nombre de nombres à tester
    Span sp(N);

    // Ajout de nombres aléatoires
    for (unsigned int i = 0; i < N; ++i) {
        sp.addNumber(std::rand() % N); // Ajoute un nombre aléatoire entre 0 et N-1
    }

    // Affichage des intervalles
    try {
        std::cout << "Le plus court intervalle: " << sp.shortestSpan() << std::endl;
        std::cout << "Le plus long intervalle: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


