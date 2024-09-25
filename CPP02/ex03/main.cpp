/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:05:36 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:29:43 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void matrice(Point a, Point b, Point c, Point d) {
	const int matSize = 20;
	char mat[matSize][matSize];

	for (int i = 0; i < matSize; ++i) {
		for (int j = 0; j < matSize; ++j) {
			mat[i][j] = '*';
		}
	}

	mat[(int)a.getY()][(int)a.getX()] = 'X';
	mat[(int)b.getY()][(int)b.getX()] = 'X';
	mat[(int)c.getY()][(int)c.getX()] = 'X';
	mat[(int)d.getY()][(int)d.getX()] = 'X';

	for (int i = 0; i < matSize; ++i) {
		for (int j = 0; j < matSize; ++j) {
			std::cout << mat[i][j];
		}
		std::cout << std::endl;
	}
}

void isInTriangle(Point a, Point b, Point c, Point point) {

	std::cout << "----------------------------------" << std::endl;
	std::cout << "|           Triangle             |" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	std::cout << "a = (" << a.getX() << "," << a.getY() << ")" << std::endl;
	std::cout << "b = (" << b.getX() << "," << b.getY() << ")" << std::endl;
	std::cout << "c = (" << c.getX() << "," << c.getY() << ")" << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "\033[1;32m" << "Point (" << point.getX() << "," << point.getY() << ") is in triangle" << "\033[0m" << std::endl;
	else
		std::cout << "\033[1;31m" << "Point (" << point.getX() << "," << point.getY() << ") is not in triangle" << "\033[0m" << std::endl;

	std::cout << std::endl;
}


int main( void ) {
	Point	a(3, 0);
	Point	b(0, 3);
	Point	c(6, 3);
	Point	point(4, 2);

	isInTriangle(a, b, c, point);

	a.setPoint(-5, 3);
	b.setPoint(5, 7);
	c.setPoint(1, 8);
	point.setPoint(-8, 6);

	isInTriangle(a, b, c, point);

	a.setPoint(-4.4, 3.45);
	b.setPoint(-1.44, -2.79);
	c.setPoint(-8.66, -1.59);
	point.setPoint(-5, -1);

	isInTriangle(a, b, c, point);

	return (0);
}
