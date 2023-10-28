/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:58:43 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 18:58:44 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

/*int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}*/

int main( void ) {
	Fixed a(5);
	Fixed b(10);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << --a << std::endl;
	std::cout << b << std::endl;
	std::cout << b + a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << b << " - " << a << " = " << b - a << std::endl;
	std::cout << b * a << std::endl;
	std::cout << b / a << std::endl;
	if (a > b)
		std::cout << a << " is greater than " << b << std::endl;
	if (a < b)
		std::cout << a << " is less than " << b << std::endl;
	Fixed c(10);
	if (c == b)
		std::cout << c << " is equal to " << b << std::endl;
	if (c >= b)
		std::cout << c << " is greater or equal to " << b << std::endl;
	if (c <= b)
		std::cout << c << " is less or equal to " << b << std::endl;
	if (c != a)
		std::cout << c << " is not equal to " << a << std::endl;
	return 0;
}
