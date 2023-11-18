/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:36:06 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:36:08 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat() {
	this->type = "Wrong Cat";
	std::cout << YELLOW << "WrongCat created" << RESET<< std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
	std::cout	<< YELLOW << "WrongCat created (Copy constructor)"
				 << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout	<< YELLOW << "WrongCat created (Copy assignment)"
				 << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << RED << "WrongCat destroyed" << RESET << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << CYAN << "*Wrong Miau!*" << RESET << std::endl;
}
