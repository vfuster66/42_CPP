/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:04:11 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 10:00:52 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/***************************************************************************
* new		-> allouer dynamiquement de la memoire sur le heap	   *
			sera supprime avec delete			   *
***************************************************************************/

Zombie	*newZombie(std::string name) {
	// cree un nouvel objet de type Zombie sur le heap
	// L'objet va persister apres la fin de la fonction
	return new Zombie(name);
}
