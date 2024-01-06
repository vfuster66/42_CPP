/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:58:16 by virginie          #+#    #+#             */
/*   Updated: 2024/01/06 17:24:12 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _elements(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array& other) : _elements(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; i++)
	{
		_elements[i] = other._elements[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];

		for (unsigned int i = 0; i < _size; i++)
		{
			_elements[i] = other._elements[i];
		}
	}

	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size) 
	{
		throw std::out_of_range("Index out of range");
	}

	return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of range");
	}

	return _elements[index];
}

template <typename T>
unsigned int Array<T>::getSize() const { return _size; }

template <typename T>
Array<T>::~Array() { delete[] _elements; }
