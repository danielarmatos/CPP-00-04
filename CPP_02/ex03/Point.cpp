/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:35:52 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/29 14:35:56 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(float x, float y) : x (x), y (y) {
}

/*Point::Point(const float x, const float y) : x (x), y (y) {
}*/

Point::Point(Fixed const x, Fixed const y): x(x), y(y) {
}

Point::~Point() {
}

Point::Point(const Point &other) {
    *this = other;
}

/*void Point::setX(Fixed x) {
    this->x = x;
}

void Point::setY(Fixed y) {
    this->y = y;
}*/

Fixed Point::getX(void) {
    return(this->x);
}

Fixed Point::getY(void) {
    return(this->y);
}

Point & Point::operator=(const Point &other) {
	(void) other;
/*    if (this != &other) {
        this->setX(other.getX);
        this->setY(other.getY);
    }*/
    return (*this);
}
