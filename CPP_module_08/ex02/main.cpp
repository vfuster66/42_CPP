/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:20:01 by virginie          #+#    #+#             */
/*   Updated: 2024/01/16 10:33:44 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	// Test avec MutantStack
	MutantStack<int> mstack;
	std::cout << "\nTests avec MutantStack:" << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Itération sur les éléments de MutantStack :" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;

	// Test avec std::list pour comparaison
	std::list<int> lst;
	std::cout << "\nTests avec std::list pour comparaison:" << std::endl;
	lst.push_back(5);
	lst.push_back(17);
	lst.pop_back();
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::cout << "Itération sur les éléments de std::list :" << std::endl;
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;

	return 0;
}
