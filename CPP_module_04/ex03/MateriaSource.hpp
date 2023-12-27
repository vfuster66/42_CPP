/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:38:32 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 22:39:38 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *learnedMaterias[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource & src);

	MateriaSource & operator=(const MateriaSource & rhs);

	virtual ~MateriaSource();

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

};

#endif
