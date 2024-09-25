/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:43:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:20:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	~Point();

	float	getX() const;
	float	getY() const;

	void	setPoint(const float x, const float y);
};

bool bsp(Point a, Point b, Point c, Point point);

#endif
