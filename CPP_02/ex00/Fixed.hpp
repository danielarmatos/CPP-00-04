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

class Fixed {
private:
	int fixedPoint;
	static const int fractionalBits = 8;

public:
	// Orthodox canonical class form:
	// - Default constructor
	// - Copy constructor
	// - Destructor
	// - Copy assignment operator

	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator=(const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
