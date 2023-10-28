//
// Created by Daniela Matos on 28/10/2023.
//

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const float x, const float y) {
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Point::~Point() {
}

Point::Point(const Point &other) {
    *this = Point;
}

Point & Point::operator=(const Point &other) {
    if (this != &other) {
        this->x = other.x;
        this->y = other.y;
    }
    return (*this);
}