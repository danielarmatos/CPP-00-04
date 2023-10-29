/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:35:30 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/29 14:35:36 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
// Calculate vectors from a to b and a to c.
   // Point ab(b.x - a.x, b.y - a.y);
    //Point ac(c.x - a.x, c.y - a.y);

	Point ab((b.getX() - a.getX()), (b.getY() - a.getY()));
/*

    // Calculate vectors from a to the test point.
    Point ap(point.x - a.x, point.y - a.y);

    // Calculate the cross product of vectors ab and ap.
    Fixed crossProductABAP(Fixed(ab.x) * Fixed(ap.y) - Fixed(ab.y) * Fixed(ap.x));

    // Calculate the cross product of vectors ac and ap.
    Fixed crossProductACAP(Fixed(ac.x) * Fixed(ap.y) - Fixed(ac.y) * Fixed(ap.x));

    // Check if the point is inside the triangle.
    if (crossProductABAP.value >= 0 && crossProductACAP.value >= 0) {
        return true;
    }
*/

    return false;

}
