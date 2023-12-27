/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:56:12 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 21:20:05 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Colors.hpp"

#include <iostream>
#include <string>

class Animal
{

public:
	Animal();
	Animal(const Animal &other);

	Animal &operator=(const Animal &other);

	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;

};

#endif