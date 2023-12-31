/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:48:31 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 14:42:56 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

class Zombie
{

public:
	Zombie();
	Zombie(std::string name);

	~Zombie();

	void	announce(void) const;
	void	setName(const std::string &name);
	static void resetCount() { _count = 0; }

private:
	std::string _name;
	static int _count;

};

Zombie* newZombie(std::string name);

Zombie* zombieHorde(int N, std::string name);

#endif
