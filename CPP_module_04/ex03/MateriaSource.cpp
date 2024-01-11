/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:20:22 by virginiefus       #+#    #+#             */
/*   Updated: 2024/01/11 19:51:36 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

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
        // Supprime les AMateria existants
        for (int i = 0; i < 4; ++i)
        {
            delete learnedMaterias[i];
        }

        // Copie les AMateria de rhs
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

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 2; ++i)
	{
		if (learnedMaterias[i] == NULL)
		{
			learnedMaterias[i] = m;
			std::cout << "Learned Materia of type " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Materia Source is full, cannot learn more Materia" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (learnedMaterias[i] != 0 && learnedMaterias[i]->getType() == type)
		{
			return learnedMaterias[i]->clone();
		}
	}
	std::cout << "No Materia of type " << type << " learned" << std::endl;
	return 0;
}

