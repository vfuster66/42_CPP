/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:58:16 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 21:24:58 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Constructeur par défaut
template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
}

// Constructeur avec taille spécifiée
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
}

// Constructeur de copie
template <typename T>
Array<T>::Array(const Array& other) : _array(NULL), _size(0)
{
	*this = other;
}

// Opérateur d'assignation
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_array[i] = other._array[i];
		}
	}
	return *this;
}

// Destructeur
template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

// Opérateur d'accès
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

// Accès constant à un élément
template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

// Taille du tableau
template <typename T>
unsigned int Array<T>::getSize() const
{
	return _size;
}
