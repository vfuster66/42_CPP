/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:45:09 by virginie          #+#    #+#             */
/*   Updated: 2024/01/10 10:25:13 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [list of positive integers]" << std::endl;
        return 1;
    }

    std::vector<int> numbersVector;
    std::list<int> numbersList;

    // Remplir le vector et la list avec les nombres passés en argument
    for (int i = 1; i < argc; ++i) {
        int value = std::atoi(argv[i]);
        if (value < 0) {
            std::cerr << "Error: Only positive integers are allowed." << std::endl;
            return 1;
        }
        numbersVector.push_back(value);
        numbersList.push_back(value);
    }

    PmergeMe pmergeMe;

    // Utiliser sortAndDisplay pour le vector
    std::cout << RED << "\nTri pour std::vector: " << RESET << std::endl;
    pmergeMe.sortAndDisplay(numbersVector);

    // Utiliser sortAndDisplay pour la list
    std::cout << RED << "Tri pour std::list: " << RESET << std::endl;
    pmergeMe.sortAndDisplay(numbersList);

    return 0;
}

