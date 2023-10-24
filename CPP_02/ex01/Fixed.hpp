/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:58:58 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 18:59:00 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractBits = 8;

public:
	// Orthodox canonical class form:
	// - Default constructor
	// - Copy constructor
	// - Destructor
	// - Copy assignment operator

	Fixed();
	Fixed(const Fixed &fixed);
    Fixed(const int &value);
    Fixed(const float &value);
	~Fixed();
	Fixed & operator=(const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& value) ;

#endif
