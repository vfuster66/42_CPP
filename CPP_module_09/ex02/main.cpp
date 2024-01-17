/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:45:09 by virginie          #+#    #+#             */
/*   Updated: 2024/01/16 15:58:09 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** argv)
{
	if (ac < 2)
	{
		std::cerr << "Usage: " << argv[0] << " [list of positive integers] OR [shell_command]" << std::endl;
		return 1;
	}

	std::string firstArg(argv[1]);
	bool isShellCommand = (firstArg.find('|') != std::string::npos);

	if (isShellCommand)
	{
		FILE* pipe = popen(firstArg.c_str(), "r");
		if (!pipe)
		{
			std::cerr << "Error: Failed to execute the shell command." << std::endl;
			return 1;
		}

		std::vector<int> numbersVector;
		std::list<int> numbersList;

		int number;
		while (fscanf(pipe, "%d", &number) == 1)
		{
			numbersVector.push_back(number);
			numbersList.push_back(number);
		}

		pclose(pipe);

		PmergeMe pmergeMe;

		std::cout << RED << "\nTri pour std::vector: " << RESET << std::endl;
		pmergeMe.sortAndDisplay(numbersVector);

		std::cout << RED << "Tri pour std::list: " << RESET << std::endl;
		pmergeMe.sortAndDisplay(numbersList);
	}
	else
	{
		std::vector<int> numbersVector;
		std::list<int> numbersList;

		for (int i = 1; i < ac; ++i)
		{
			int value = std::atoi(argv[i]);
			if (value < 0)
			{
				std::cerr << "Error: Only positive integers are allowed." << std::endl;
				return 1;
			}
			numbersVector.push_back(value);
			numbersList.push_back(value);
		}

		PmergeMe pmergeMe;

		std::cout << RED << "\nTri pour std::vector: " << RESET << std::endl;
		pmergeMe.sortAndDisplay(numbersVector);

		std::cout << RED << "Tri pour std::list: " << RESET << std::endl;
		pmergeMe.sortAndDisplay(numbersList);
	}

	return 0;
}


