/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:04:13 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 22:00:08 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Colors.hpp"
#include <iostream>

class Cat : public Animal
{
	Brain* brain;

public:
	Cat();
	Cat(const Cat &other);

	Cat &operator=(const Cat &other);

	virtual ~Cat();

	void makeSound() const;

};

#endif

