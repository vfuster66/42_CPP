/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:41:56 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 14:31:59 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);

	FragTrap &operator=(const FragTrap &other);

	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys(void);

};

#endif