/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:36:06 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/29 14:36:08 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Point(Fixed const x, Fixed const y);
    Point(const Point &Point);
    ~Point();
    Point &operator=(const Point &Point);

   // void setX(Fixed x);
    //void setY(Fixed y);
    Fixed getX(void);
    Fixed getY(void);
};

#endif
