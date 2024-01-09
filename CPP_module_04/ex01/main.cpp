/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:23:59 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:38:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Colors.hpp"

int main() {
    std::cout << "\n--- Test de Base : Création et Suppression d'Animaux ---" << std::endl;

    // Création d'un tableau d'animaux
    const int nbAnimals = 10;
    Animal* animals[nbAnimals];

    // Remplissage du tableau avec des chiens et des chats
    for (int i = 0; i < nbAnimals / 2; ++i) {
        animals[i] = new Dog();
        animals[nbAnimals - 1 - i] = new Cat();
    }

    // Vérification des types et des sons
    for (int i = 0; i < nbAnimals; ++i) {
        std::cout << animals[i]->getType() << " sound : ";
        animals[i]->makeSound();
    }

    // Destruction des animaux et vérification des destructeurs
    std::cout << LIGHT_RED << "\nDestruction des animaux..." << RESET << std::endl;
    for (int i = 0; i < nbAnimals; ++i) {
        delete animals[i];
    }

    std::cout << "\n--- Test de Copie et d'Affectation ---" << std::endl;

    Dog originalDog;
    Dog copyDog(originalDog);
    Dog assignedDog = originalDog;

    Cat originalCat;
    Cat copyCat(originalCat);
    Cat assignedCat = originalCat;

    // Vérification des copies et affectations
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

