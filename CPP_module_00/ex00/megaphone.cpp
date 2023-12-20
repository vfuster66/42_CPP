/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:34:49 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/20 14:28:21 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					av[i][j] -= 32; 
				}
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
