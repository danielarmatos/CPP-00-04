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
#include <iostream>

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int &value) : value(0) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value;
}

Fixed::Fixed(const float &value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw ) {
   // std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed & Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		value = fixed.value;
	}
	std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(fixed.getRawBits());
	return (*this);
}

float Fixed::toFloat( void ) const {
    float floatingPointValue = static_cast<float>(this->value);
    return (floatingPointValue);
}

int Fixed::toInt( void ) const {
    return (this->value);
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
	int integer = Fixed::ge
	float floatValue = static_cast<float>(value.value) + static_cast<float>(value.fractBits) / 100.0;
	out << floatValue;
	return (out);
}
