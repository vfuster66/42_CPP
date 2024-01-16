/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:54:01 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 21:25:38 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define MAX_VAL 750

template <typename T>
class Array
{

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);

	Array& operator=(const Array& other);

	~Array();

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	unsigned int getSize() const;

private:
	T* _array;
	unsigned int _size;

};

#include "Array.tpp"

#endif

