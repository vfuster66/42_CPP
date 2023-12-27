/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:49:08 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Colors.hpp"

#include <iostream>

int main()
{
	std::cout << "\n--- Test de Base : Création et Suppression d'Animaux ---" << std::endl;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << RED << dog->getType() << " fait un son : ";
	dog->makeSound();

	std::cout << MAGENTA << cat->getType() << " fait un son : ";
	cat->makeSound();

	delete dog;
	delete cat;

	std::cout << "\n--- Test de Copie et d'Affectation ---" << std::endl;

	Dog originalDog;
	Dog copyDog(originalDog);
	Dog assignedDog = originalDog;

	Cat originalCat;
	Cat copyCat(originalCat);
	Cat assignedCat = originalCat;

	std::cout << RED << "Original Dog: " << originalDog.getType() << " - ";
	originalDog.makeSound();

	std::cout << RED << "Copied Dog: " << copyDog.getType() << " - ";
	copyDog.makeSound();

	std::cout << RED << "Assigned Dog: " << assignedDog.getType() << " - ";
	assignedDog.makeSound();

	std::cout << MAGENTA << "Original Cat: " << originalCat.getType() << " - ";
	originalCat.makeSound();

	std::cout << MAGENTA << "Copied Cat: " << copyCat.getType() << " - ";
	copyCat.makeSound();

	std::cout << MAGENTA << "Assigned Cat: " << assignedCat.getType() << " - ";
	assignedCat.makeSound();

	return 0;
}
