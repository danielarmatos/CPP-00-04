//
// Created by Daniela Matos on 28/10/2023.
//

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(float x, float y) : x (x), y (y)
{
}

/*Point::Point(const float x, const float y) {
    this->x = Fixed a(x);
    this->y = Fixed b(y);
}*/

Point::~Point() {
}

Point::Point(const Point &other) {
    *this = other;
}

void Point::setX(const float value) {
    this->x = value;
}

void Point::setY(const float value) {
    this->y = value;
}

float Point::getX(void) {
    return(this->x);
}

float Point::getY(void) {
    return(this->y);
}

Point & Point::operator=(const Point &other) {
    if (this != &other) {
        this->setX(other.getX)
        this->setY(other.getY);
    }
    return (*this);
}