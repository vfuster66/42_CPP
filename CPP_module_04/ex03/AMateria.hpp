/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:19:09 by virginiefus       #+#    #+#             */
/*   Updated: 2023/12/28 10:52:07 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Colors.hpp"

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &src);

	virtual ~AMateria();

    AMateria &operator=(const AMateria &rhs);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string type;

};

#endif
