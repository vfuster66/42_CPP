/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:50:23 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:55:16 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

Brain::Brain()
{
	std::cout << GREEN << "Brain default constructed." << RESET << std::endl;

}

Brain::Brain(const Brain& other)
{
	std::cout << GREEN << "Brain copy constructed." << RESET << std::endl;

	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << GREEN << "Brain assignment operator called." << RESET << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Brain::~Brain()
{
	std::cout << GREEN << "Brain destructed." << RESET << std::endl;
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/
