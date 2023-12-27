/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:32:00 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Colors.hpp"

#include <iostream>

int main()
{
	std::cout << "\nBasic Tests\n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << RED << j->getType() << RESET << std::endl;
	std::cout << MAGENTA << i->getType() << RESET << std::endl;
	std::cout << YELLOW << wrongMeta->getType() << RESET << std::endl;
	std::cout << CYAN << wrongI->getType() << RESET << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongMeta->makeSound();
	wrongI->makeSound();

	delete i;
	delete j;
	delete meta;
	delete wrongI;
	delete wrongMeta;

	std::cout << "\nAdvanced Tests\n" << std::endl;

	Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int k = 0; k < 2; ++k)
	{
		std::cout << animals[k]->getType() << ": ";
		
		animals[k]->makeSound();
	}

	for (int k = 0; k < 2; ++k)
	{
		delete animals[k];
	}

	Dog originalDog;
	Dog copyDog(originalDog);
	Dog assignedDog = originalDog;

	Cat originalCat;
	Cat copyCat(originalCat);
	Cat assignedCat = originalCat;

	std::cout << "\nCopy and Assignment Test: \n" << std::endl;
	std::cout << RED << "Original Dog: " << originalDog.getType() << RESET << std::endl;
	std::cout << RED << "Copied Dog: " << copyDog.getType() << RESET << std::endl;
	std::cout << RED << "Assigned Dog: " << assignedDog.getType() << RESET << std::endl;
	std::cout << MAGENTA << "Original Cat: " << originalCat.getType() << RESET << std::endl;
	std::cout << MAGENTA << "Copied Cat: " << copyCat.getType() << RESET << std::endl;
	std::cout << MAGENTA << "Assigned Cat: " << assignedCat.getType() << RESET << std::endl;

	std::cout << "\nUnexpected Behavior Test (pedagogical):\n" << std::endl;
	Animal* unexpectedAnimal = new Dog();
	delete unexpectedAnimal;

	return 0;
}


