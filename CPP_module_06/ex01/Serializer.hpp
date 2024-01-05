/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:06:40 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 16:20:11 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstddef>
#include <iostream>

struct Data
{
	int value;
};

typedef size_t uintptr_t;

class Serializer
{

public:
	Serializer();
	Serializer(const Serializer& other);

	Serializer& operator=(const Serializer& other);

	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};

#endif
