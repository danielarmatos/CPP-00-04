//
// Created by Daniela Matos on 28/10/2023.
//

#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point &Point);
    ~Point();
    Point &operator=(const Point &Point);
};

#endif
