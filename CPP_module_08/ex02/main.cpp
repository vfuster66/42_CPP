/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:20:01 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 18:28:23 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	std::cout << "\nAjout de nombres dans MutantStack." << std::endl;
	mstack.push(5);
	std::cout << "Nombre 5 ajouté." << std::endl;
	mstack.push(17);
	std::cout << "Nombre 17 ajouté." << std::endl;

	std::cout << "\nValeur au sommet : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Element au sommet retiré, taille actuelle : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(83);
	mstack.push(737);
	std::cout << "Nombres 3, 5 et 737 ajoutés." << std::endl;

	std::cout << "\nItération sur les éléments de MutantStack :" << std::endl;

	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	return 0;
}
