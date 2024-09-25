/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:06:05 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 14:26:17 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float rawFloat);
	Fixed(const Fixed &fixed);
	~Fixed();

	float	toFloat() const;
	int		toInt() const;
	int		getRawBits(void) const;
	void	setRawBits(const int raw);

	bool	operator<(const Fixed &fixed) const;
	bool	operator>(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;

	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	Fixed&	operator=(const Fixed &other);

	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed&	operator--(void);
	Fixed&	operator++(void);

	static Fixed min(Fixed& fixed1, Fixed& fixed2);
	static Fixed max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed min(const Fixed& fixed1, const Fixed& fixed2);
	static const Fixed max(const Fixed& fixed1, const Fixed& fixed2);
};
std::ostream &operator<<(std::ostream &out, const Fixed &rawBits);

#endif
