/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:48:39 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 10:18:09 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    // Création des sommets du triangle
    Point a(0.0f, 0.0f);
    Point b(1.0f, 0.0f);
    Point c(0.5f, 1.0f);

    // Points pour tester
    Point insidePoint(0.5f, 0.5f); // Clairment à l'intérieur
    Point outsidePoint(1.5f, 1.5f); // Clairment à l'extérieur
    Point onEdgePoint(0.5f, 0.0f); // Sur le bord
    Point vertexPoint = a; // Un sommet du triangle

    // Test avec la fonction bsp
    std::cout << "Inside Point: " << (bsp(a, b, c, insidePoint) ? "Yes" : "No") << std::endl;
    std::cout << "Outside Point: " << (bsp(a, b, c, outsidePoint) ? "Yes" : "No") << std::endl;
    std::cout << "On Edge Point: " << (bsp(a, b, c, onEdgePoint) ? "Yes" : "No") << std::endl;
    std::cout << "Vertex Point: " << (bsp(a, b, c, vertexPoint) ? "Yes" : "No") << std::endl;

    return 0;
}