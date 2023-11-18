/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:55 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:34:56 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Default";
	std::cout << YELLOW << "Animal created" << RESET<< std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout	<< YELLOW << "Animal created (Copy constructor)"
				<< RESET << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout	<< YELLOW << "Animal created (Copy assignment)"
				<< RESET << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << YELLOW << "Animal destroyed" << RESET << std::endl;
}

// -------------------------- //

std::string Animal::getType() const {
	return (this->type);
}
