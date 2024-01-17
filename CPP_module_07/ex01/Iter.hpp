/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:34:26 by virginie          #+#    #+#             */
/*   Updated: 2024/01/15 17:27:29 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T &x)
{
	std::cout << x << std::endl;
}

// Surcharge pour les pointeurs constants
template<typename T>
void iter(const T* array, int length, void (*f)(const T&))
{
    if (array == NULL)
    {
        std::cerr << "Erreur : Tableau nul." << std::endl;
        return;
    }

    if (length <= 0)
    {
        std::cerr << "Erreur : Longueur du tableau invalide." << std::endl;
        return;
    }

    for (int i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

// Version originale pour les pointeurs non constants
template<typename T>
void iter(T* array, int length, void (*f)(T&))
{
    if (array == NULL)
    {
        std::cerr << "Erreur : Tableau nul." << std::endl;
        return;
    }

    if (length <= 0)
    {
        std::cerr << "Erreur : Longueur du tableau invalide." << std::endl;
        return;
    }

    for (int i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

#endif
