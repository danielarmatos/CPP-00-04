/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:58:52 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 18:58:54 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedPoint(0) {
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
    this->fixedPoint = raw;
}

Fixed & Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		this->fixedPoint = fixed.getRawBits();
	}
	return (*this);
}


// ----- //


Fixed::Fixed(const int value) {
	int scaleFactor = std::pow(2, this->fractionalBits);
	this->fixedPoint = value * scaleFactor;
}

Fixed::Fixed(const float value) {
	int scaleFactor = std::pow(2, this->fractionalBits);
	this->fixedPoint = roundf(value * scaleFactor);
}

float Fixed::toFloat( void ) const {
	int scaleFactor = std::pow(2, this->fractionalBits);
	return ((float)this->fixedPoint / scaleFactor);
}

int Fixed::toInt( void ) const {
	int scaleFactor = std::pow(2, this->fractionalBits);
	return (this->fixedPoint / scaleFactor);
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed) {
	out << fixed.toFloat();
	return (out);
}


// ----- //

//Comparison operators:

bool Fixed::operator>(const Fixed &fixed) {
	if (this->fixedPoint > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &fixed) {
	return (this->fixedPoint < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) {
	return (this->fixedPoint >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) {
	return (this->fixedPoint <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) {
	return (this->fixedPoint == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) {
	return (this->fixedPoint != fixed.getRawBits());
}

// Arithmetic operators:

Fixed Fixed::operator+(const Fixed &fixed) {
	Fixed result(this->toFloat() + fixed.toFloat());
	return (result);
}

Fixed Fixed::operator-(const Fixed &fixed) {
	Fixed result(this->toFloat() - fixed.toFloat());
	return (result);
}

Fixed Fixed::operator*(const Fixed &fixed) {
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed &fixed) {
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);
}

// Increment / Decrement:

// ++a (increment a, then use it)
Fixed Fixed::operator++(void) {
	this->fixedPoint++;
	return (*this);
}

// a++ (use a, then increment it)
Fixed Fixed::operator++(int) {
	Fixed result(*this);
	this->fixedPoint++;
	return (result);
}

// --a
Fixed Fixed::operator--(void) {
	this->fixedPoint--;
	return (*this);
}

// a--
Fixed Fixed::operator--(int) {
	Fixed result(*this);
	this->fixedPoint--;
	return (result);
}

// Min & max:

Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return ((Fixed&)f1);
	return ((Fixed&)f2);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return ((Fixed&)f1);
	return ((Fixed&)f2);
}

Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return ((Fixed&)f1);
	return ((Fixed&)f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return ((Fixed&)f1);
	return ((Fixed&)f2);
}