/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:04:38 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/15 17:25:47 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

#endif
