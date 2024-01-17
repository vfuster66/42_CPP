/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:59:19 by virginie          #+#    #+#             */
/*   Updated: 2024/01/16 08:46:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

/*int main()
{
	Span sp(10);

	std::cout << "Ajout de nombres dans le Span." << std::endl;

	try
	{
		sp.addNumber(50);
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
		srand(static_cast<unsigned int>(time(0)));
		std::vector<int> randomNumbers;
		randomNumbers.reserve(45);
		for (int i = 0; i < 45; ++i) {
			randomNumbers.push_back(rand());
		}
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

		try {
		// Ajout des nombres aléatoires au Span
			sp.addRange(randomNumbers.begin(), randomNumbers.end());
			std::cout << "Nombres aléatoires ajoutés avec succès." << std::endl;

			// Calcul et affichage des spans
			std::cout << "\nCalcul du span le plus court." << std::endl;
			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

			std::cout << "\nCalcul du span le plus long." << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		} catch (const std::exception& e) {
			std::cerr << "Exception: " << e.what() << std::endl;
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

int main()
{
	Span sp(55);

    std::cout << "Ajout de nombres dans le Span." << std::endl;

    try {
        sp.addNumber(50);
        std::cout << "Nombre 50 ajouté." << std::endl;
        sp.addNumber(3);
        std::cout << "Nombre 3 ajouté." << std::endl;
        sp.addNumber(17);
        std::cout << "Nombre 17 ajouté." << std::endl;
        sp.addNumber(9);
        std::cout << "Nombre 9 ajouté." << std::endl;
        sp.addNumber(11);
        std::cout << "Nombre 11 ajouté." << std::endl;
		
		std::cout << "\nCalcul du span le plus court et le plus long après l'ajout des nombres avec addNumber." << std::endl;
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        std::cout << "\nAjout d'une série de 50 nombres aléatoires avec addRange." << std::endl;
        srand(static_cast<unsigned int>(time(0)));
        std::vector<int> randomNumbers;
        randomNumbers.reserve(50);
        for (int i = 0; i < 50; ++i) {
            randomNumbers.push_back(rand() % 10000);
        }

        sp.addRange(randomNumbers.begin(), randomNumbers.end());
        std::cout << "Nombres aléatoires ajoutés avec succès." << std::endl;

        std::cout << "\nCalcul du span le plus court et le plus long après l'ajout des nombres aléatoires." << std::endl;
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        std::cout << "\nTentative d'ajout d'un autre nombre (doit échouer car la capacité est atteinte)." << std::endl;
        sp.addNumber(20);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


