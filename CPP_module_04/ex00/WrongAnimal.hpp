/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:34:32 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:20:40 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Colors.hpp"

#include <string>
#include <iostream>

class WrongAnimal
{

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);

	WrongAnimal& operator=(const WrongAnimal& other);

	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;

};

#endif
