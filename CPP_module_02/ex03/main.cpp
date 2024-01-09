/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:48:39 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/28 15:38:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(0.5f, 1.0f);

	Point insidePoint(0.5f, 0.5f);
	Point outsidePoint(1.5f, 1.5f);
	Point onEdgePoint(0.5f, 0.0f);
	Point vertexPoint = a;
	Point clearlyOutsidePoint(1.5f, 1.5f);
	Point clearlyInsidePoint(0.25f, 0.25f);
	Point farFromEdgePoint(0.1f, 0.9f);
	Point farFromVertexPoint(0.1f, 0.1f);

	if (bsp(a, b, c, insidePoint))
		std::cout << "Inside Point: Yes" << std::endl;
	else
		std::cout << "Inside Point: No" << std::endl;

	if (bsp(a, b, c, outsidePoint))
		std::cout << "Outside Point: Yes" << std::endl;
	else
		std::cout << "Outside Point: No" << std::endl;

	if (bsp(a, b, c, onEdgePoint))
		std::cout << "On Edge Point: Yes" << std::endl;
	else
		std::cout << "On Edge Point: No" << std::endl;

	if (bsp(a, b, c, vertexPoint))
		std::cout << "Vertex Point: Yes" << std::endl;
	else
		std::cout << "Vertex Point: No" << std::endl;

	if (bsp(a, b, c, clearlyOutsidePoint))
		std::cout << "Clearly Outside Point: Yes" << std::endl;
	else
		std::cout << "Clearly Outside Point: No" << std::endl;

	if (bsp(a, b, c, clearlyInsidePoint))
		std::cout << "Clearly Inside Point: Yes" << std::endl;
	else
		std::cout << "Clearly Inside Point: No" << std::endl;

	if (bsp(a, b, c, farFromEdgePoint))
		std::cout << "Far From Edge Point: Yes" << std::endl;
	else
		std::cout << "Far From Edge Point: No" << std::endl;

	if (bsp(a, b, c, farFromVertexPoint))
		std::cout << "Far From Vertex Point: Yes" << std::endl;
	else
		std::cout << "Far From Vertex Point: No" << std::endl;

	return 0;
}
