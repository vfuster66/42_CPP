/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:39:26 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Colors.hpp"

int main()
{
	std::cout << "\nBasic Tests\n" << std::endl;

	std::cout << LIGHT_GREEN << "Creating Animals..." << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << LIGHT_GREEN << "Testing Animals..." << RESET << std::endl;
	std::cout << RED << j->getType() << " makes sound: " << RESET;
	j->makeSound();

	std::cout << MAGENTA << i->getType() << " makes sound: " << RESET;
	i->makeSound();

	std::cout << YELLOW << meta->getType() << " makes sound: " << RESET;
	meta->makeSound();

	std::cout << LIGHT_GREEN << "Deleting Animals..." << RESET << std::endl;
	delete i;
	delete j;
	delete meta;

	std::cout << "\nWrong Animal Test\n" << std::endl;

	std::cout << LIGHT_GREEN << "Creating Wrong Animals..." << RESET << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << LIGHT_GREEN << "Testing Wrong Animals..." << RESET << std::endl;
	std::cout << YELLOW << wrongMeta->getType() << " makes sound: " << RESET;
	wrongMeta->makeSound();

	std::cout << CYAN << wrongI->getType() << " makes sound: " << RESET;
	wrongI->makeSound();

	std::cout << LIGHT_GREEN << "Deleting Wrong Animals..." << RESET << std::endl;
	delete wrongI;
	delete wrongMeta;

	std::cout << "\nAdvanced Polymorphism Test\n" << std::endl;

	std::cout << LIGHT_GREEN << "Creating an array of Animals..." << RESET << std::endl;
	Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int k = 0; k < 2; ++k)
	{
		std::cout << animals[k]->getType() << " makes sound: ";
		animals[k]->makeSound();
	}

	std::cout << LIGHT_GREEN << "Deleting array of Animals..." << RESET << std::endl;
	for (int k = 0; k < 2; ++k)
	{
		delete animals[k];
	}

	return 0;
}



