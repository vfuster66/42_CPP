/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 09:56:04 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();

	std::cout << "\nLearning Materias Ice and Cure:\n" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\nTrying to learn a third Materia (Ice) when the source is full\n" << std::endl;
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");

    std::cout << "\nCreating and equipping Materias: Ice and Cure" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "\nTrying to equip an unknown Materia type (fire)" << std::endl;
    tmp = src->createMateria("fire");
    if (tmp) me->equip(tmp);
    else std::cout << "No 'fire' Materia found, none equipped" << std::endl;

    ICharacter* bob = new Character("bob");

    std::cout << "\nUsing equipped Materias on 'bob'" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\nTrying to use a Materia at an invalid slot (100)" << std::endl;
    me->use(100, *bob);

    std::cout << "\nTesting equip and unequip mechanisms" << std::endl;
    me->equip(new Ice());
    me->unequip(0);
    std::cout << "Unequipped Materia from slot 0" << std::endl;

    std::cout << "\nTesting use after unequip" << std::endl;
    me->use(0, *bob);

    std::cout << "\nCleaning up memory" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}


