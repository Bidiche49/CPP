/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:06:05 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:52:27 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _value;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float rawFloat);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(const int raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream	&operator<<( std::ostream &out, const Fixed &rawBits);

#endif
