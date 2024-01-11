/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:32:31 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2024/01/11 20:53:59 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

public:
	Character(std::string const & name);
	Character(const Character & src);

	Character & operator=(const Character & rhs);

	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	AMateria *getInventorySlot(int idx) const;
	bool isInventoryFull() const;

private:
	std::string name;
	AMateria *inventory[4];


};

#endif

