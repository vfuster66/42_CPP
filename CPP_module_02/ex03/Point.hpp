/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:49:44 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/27 14:03:00 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

public:
	Point();
	Point(float const x, float const y);
	Point(Point const &other);

	Point &operator=(Point const &other);

	~Point();

	Fixed getX() const;
	Fixed getY() const;

private:
	Fixed _x;
	Fixed _y;

};

#endif
