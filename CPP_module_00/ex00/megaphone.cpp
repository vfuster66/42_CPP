/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:34:49 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:13:07 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/************************************************************************
 * bibliotheque <iostream>						*
 * std::toupper() 	-> utilise pour convertir une caractere en	*
 * 			majuscule.					*
 ***********************************************************************/

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			for (int j = 0; av[i][j]; ++j)
			{
				av[i][j] = std::toupper(av[i][j]);
				std::cout << av[i][j];
			}
			if (i < ac - 1)
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
