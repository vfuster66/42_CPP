/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:04:13 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:36:33 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Colors.hpp"

#include <iostream>

class Dog : public Animal
{
	Brain* brain;

public:
	Dog();
	Dog(const Dog &other);

	Dog &operator=(const Dog &other);

	virtual ~Dog();

	void makeSound() const;

};

#endif



