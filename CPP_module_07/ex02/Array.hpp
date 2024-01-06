/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:54:01 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 17:15:11 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);

	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	~Array();

	unsigned int getSize() const;

private:
	T* _elements;
	unsigned int _size;

};

#include "Array.tpp"

#endif
