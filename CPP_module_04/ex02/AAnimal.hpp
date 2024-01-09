/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:56:12 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/08 15:47:49 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "Colors.hpp"

#include <iostream>
#include <string>

class AAnimal
{

public:
	AAnimal();
	AAnimal(const AAnimal &other);

	AAnimal &operator=(const AAnimal &other);

	virtual ~AAnimal();

	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	std::string _type;

};

#endif
