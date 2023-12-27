/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:19:09 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:31:03 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

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
