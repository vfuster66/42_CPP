/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:04:13 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 22:04:34 by virginiefusterpe ###   ########.fr       */
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



