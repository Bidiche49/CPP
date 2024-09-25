/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:11:48 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:34:28 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(const int raw) {
	_value = raw << _fractionalBits;
}

Fixed::Fixed(const float rawFloat) {
	_value = roundf(rawFloat * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& copy) {
	*this = copy;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits(void) const {
	return (_value);
}

Fixed& Fixed::operator=(const Fixed& copy) {
	if (this != &copy)
		_value = copy.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
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

bool Fixed::operator<(const Fixed& fixed) const {
	if ((this->getRawBits() < fixed.getRawBits()))
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& fixed) const {
	if ((this->getRawBits() <= fixed.getRawBits()))
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& fixed) const {
	if ((this->getRawBits() > fixed.getRawBits()))
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& fixed) const {
	if ((this->getRawBits() >= fixed.getRawBits()))
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& fixed) const {
	if ((this->getRawBits() == fixed.getRawBits()))
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& fixed) const {
	if ((this->getRawBits() != fixed.getRawBits()))
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &fixed) const{
	Fixed tmp(this->toFloat() + fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const{
	Fixed tmp(this->toFloat() - fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const{
	Fixed tmp(this->toFloat() * fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const{
	Fixed tmp(this->toFloat() / fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	_value++;
	return (tmp);
}

Fixed& Fixed::operator++() {
	_value++;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

Fixed& Fixed::operator--() {
	_value--;
	return (*this);
}

void operator++(Fixed& fixed) {
	fixed.setRawBits(fixed.getRawBits() + 1);
}

Fixed Fixed::min(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::max(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed Fixed::min(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed Fixed::max(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}
