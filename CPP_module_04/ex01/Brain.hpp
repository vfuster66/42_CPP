/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:50:40 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:54:38 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Colors.hpp"

#include <string>
#include <iostream>

class Brain
{

public:
	Brain();
	Brain(const Brain& other);

	Brain& operator=(const Brain& other);

	~Brain();

	std::string ideas[100];
};

#endif
