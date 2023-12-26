/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:49:40 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 10:07:50 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*****************************************************************************
 *                                 CONSTRUCTEUR                              *
*****************************************************************************/

// Constructeur par default
Point::Point() : _x(0), _y(0) {}

// Constructeur avec 2 parametres float
Point::Point(float const xVal, float const yVal) : _x(xVal), _y(yVal) {}

// Copie du constructeur
Point::Point(Point const &other) : _x(other._x), _y(other._y) {}

// Copie de l'operateur d'assignement
Point &Point::operator=(Point const &other) {
	if (this != &other) {
		const_cast<Fixed&>(this->_x) = other._x;
		const_cast<Fixed&>(this->_y) = other._y;
	}
	return *this;
}

/*****************************************************************************
 *                                 DESTRUCTEUR                               *
*****************************************************************************/

Point::~Point() {}

/*****************************************************************************
 *                                 FONCTIONS                                 *
*****************************************************************************/

Fixed Point::getX() const {
	return _x;
}

Fixed Point::getY() const {
	return _y;
}