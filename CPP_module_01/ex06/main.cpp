/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:55:28 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:18:13 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		Harl harl;
		
		harl.filterComplaints(av[1]);
	}
	else
	{
		std::cerr << "Usage: " << av[0] << " [DEBUG/INFO/WARNING/ERROR]" << std::endl;
	}
	
	return 0;
}
