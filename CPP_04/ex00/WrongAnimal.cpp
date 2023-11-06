/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:55:31 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:55:32 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << YELLOW << "WrongAnimal created" << RESET<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout	<< YELLOW << "WrongAnimal created (Copy constructor)"
				 << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout	<< YELLOW << "WrongAnimal created (Copy assignment)"
				 << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << YELLOW << "WrongAnimal destroyed" << RESET << std::endl;
}

// -------------------------- //