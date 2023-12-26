/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:13:02 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:40:25 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{

public:
	Zombie(std::string name);

	~Zombie();

	void	announce(void) const;

private:
	std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
