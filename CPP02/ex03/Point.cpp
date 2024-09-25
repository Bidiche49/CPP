/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:47 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:25:27 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point() {}

float Point::getX() const {
	return (_x.toFloat());
}

float Point::getY() const {
	return (_y.toFloat());
}

void Point::setPoint(const float x, const float y) {
	_x = x;
	_y = y;
}

int	isIn(Point a, Point b, Point point)	{
	return ((b.getX() - point.getX()) * (a.getY() - point.getY()) - (b.getY() - point.getY()) * (a.getX() - point.getX()));
}

bool bsp(Point a, Point b, Point c, Point point) {
	if (((isIn(a, b, point) < 0) && (isIn(b, c, point) < 0) && (isIn(c, a, point) < 0)) || ((isIn(a, b, point) > 0) && (isIn(b, c, point) > 0) && (isIn(c, a, point) > 0)))
		return (true);
	return (false);
}
