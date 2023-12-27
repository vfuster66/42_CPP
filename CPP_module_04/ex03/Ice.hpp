/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:19:09 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:30:40 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(const Ice &src);

	Ice &operator=(const Ice &rhs);

	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif

