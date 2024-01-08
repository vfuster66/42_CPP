/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:58:12 by virginie          #+#    #+#             */
/*   Updated: 2024/01/08 21:26:05 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " \"expression\"" << std::endl;
		return 1;
	}

	RPN calculator;
	int result = calculator.evaluate(av[1]);

	if (result != -1)
	{
		std::cout << result << std::endl;
	}

	return 0;
}

