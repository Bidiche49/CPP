/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:11:48 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 12:34:30 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw) {
	std::cout << "Int constructor called" << std::endl;
	_value = raw << _fractionalBits;
}

Fixed::Fixed(const float rawFloat) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(rawFloat * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_value = copy.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat() const {
	return ((float)(_value) / (1 << _fractionalBits));
}

int Fixed::toInt() const {
	return (_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& rawBits) {
	out << rawBits.toFloat();
	return (out);
}
