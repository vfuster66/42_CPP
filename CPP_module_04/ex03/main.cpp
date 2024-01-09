/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 16:14:54 by vfuster-         ###   ########.fr       */
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

    std::cout << "\nTesting cloning of Materias:" << std::endl;
    AMateria* iceClone = src->createMateria("ice")->clone();
    me->equip(iceClone); 

    std::cout << "\nTesting unequip and reequip mechanisms" << std::endl;
    me->unequip(0); 
    me->equip(new Cure()); 

    std::cout << "\nTesting inventory full scenario" << std::endl;
    for (int i = 0; i < 4; i++) {
        me->equip(new Ice());
    }

    std::cout << "\nTesting Character copying" << std::endl;
    Character* copyOfMe = new Character(*dynamic_cast<Character*>(me));
    copyOfMe->use(0, *bob); 

    std::cout << "\nTesting use after unequip" << std::endl;
    me->use(0, *bob);

    std::cout << "\nTrying to use a Materia at an invalid slot (100)" << std::endl;
    me->use(100, *bob);

    std::cout << "\nCleaning up memory" << std::endl;
    delete bob;
    delete me;
    delete copyOfMe; 
    delete src;

    return 0;
}



