/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:06:39 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/12 10:17:21 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " <literal_to_convert>" << std::endl;
		return 1;
	}

	try
	{
		ScalarConverter::convert(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}
