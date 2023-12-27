/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:35:47 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:20:50 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Colors.hpp"

#include <iostream>

class WrongCat : public WrongAnimal
{
	
public:
	WrongCat();
	WrongCat(const WrongCat& other);

	WrongCat& operator=(const WrongCat& other);

	~WrongCat();

	void makeSound() const;
	
};

#endif
