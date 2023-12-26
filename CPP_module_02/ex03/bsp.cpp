/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:49:25 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 10:23:40 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float area(Point const &a, Point const &b, Point const &c) {
	return std::abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
					+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) 
					+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
					/ 2.0);
}

bool isOnLine(Point const &a, Point const &b, Point const &p) {
	// Vérifie si le point p est sur la ligne formée par les points a et b
	float crossProduct = (p.getY().toFloat()
							- a.getY().toFloat()) * (b.getX().toFloat()
							- a.getX().toFloat()) - (b.getY().toFloat()
							- a.getY().toFloat()) * (p.getX().toFloat()
							- a.getX().toFloat());
	return std::abs(crossProduct) < 0.0001;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	// Verifier si le point est sur l'un des bords du triangle
	if (isOnLine(a, b, point) || isOnLine(b, c, point) || isOnLine(c, a, point)) {
		return false;
	}

	float A = area(a, b, c);
	float A1 = area(point, b, c);
	float A2 = area(a, point, c);
	float A3 = area(a, b, point);

	// Tolérance pour les erreurs de précision
	float tolerance = 0.001f; 

	// Vérifier si la somme des aires des sous-triangles est proche de l'aire du triangle principal
	return std::abs(A - (A1 + A2 + A3)) < tolerance;
}

