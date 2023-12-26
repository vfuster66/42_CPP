/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:04:14 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 10:02:01 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Cree un objet  Zombie temporaire sur la stack
// La memoire est liberee des que la fonction se termine
void	randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}