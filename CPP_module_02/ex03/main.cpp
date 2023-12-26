/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:48:39 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 15:38:34 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(0.5f, 1.0f);

	Point insidePoint(0.5f, 0.5f);
	Point outsidePoint(1.5f, 1.5f);
	Point onEdgePoint(0.5f, 0.0f);
	Point vertexPoint = a;

	if (bsp(a, b, c, insidePoint))
	{
		std::cout << "Inside Point: Yes" << std::endl;
	}
	else
	{
		std::cout << "Inside Point: No" << std::endl;
	}

	if (bsp(a, b, c, outsidePoint))
	{
		std::cout << "Outside Point: Yes" << std::endl;
	}
	else
	{
		std::cout << "Outside Point: No" << std::endl;
	}
	
	if (bsp(a, b, c, onEdgePoint))
	{
		std::cout << "On Edge Point: Yes" << std::endl;
	}
	else
	{
		std::cout << "On Edge Point: No" << std::endl;
	}

	if (bsp(a, b, c, vertexPoint))
	{
		std::cout << "Vertex Point: Yes" << std::endl;
	}
	else
	{
		std::cout << "Vertex Point: No" << std::endl;
	}

	return 0;
}
