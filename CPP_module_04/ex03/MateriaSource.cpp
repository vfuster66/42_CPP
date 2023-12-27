/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:42:55 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Amateria.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		learnedMaterias[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (rhs.learnedMaterias[i] != 0)
			{
				this->learnedMaterias[i] = rhs.learnedMaterias[i]->clone();
			}
			else
			{
				this->learnedMaterias[i] = 0;
			}
		}
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (learnedMaterias[i] != 0)
		{
			delete learnedMaterias[i];
		}
	}
}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

void MateriaSource::learnMateria(AMateria *m)
{
    // Code pour apprendre une Materia
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    // Code pour créer une nouvelle Materia en utilisant le type
}
