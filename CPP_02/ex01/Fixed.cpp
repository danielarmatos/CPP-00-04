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
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
    this->fixedPoint = raw;
}

Fixed & Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->fixedPoint = fixed.getRawBits();
	}
	return (*this);
}


// ----- //


Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	int scaleFactor = std::pow(2, this->fractionalBits);
	this->fixedPoint = value * scaleFactor;
}

/* For example, we get the value 1234,4321 and we want to store it as an int
 * (without the decimal separator). We do this to get the scale factor:
 * 1234.43 × 2^8 = 316014
 * or
 * 1234.43 × (1 << 8)
 * both 2^8 and 1<<8 equals 256
 * fixed point numbers in this format have 8 bits for the integer part
 * and 8 bits for the fraction part
 * */

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
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
