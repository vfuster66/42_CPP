/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:19:09 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:30:46 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(const Cure &src);

	Cure &operator=(const Cure &rhs);

	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif


