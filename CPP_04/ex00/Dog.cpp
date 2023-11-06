/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:20 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:21 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << YELLOW << "Dog created" << RESET<< std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout	<< YELLOW << "Dog created (Copy constructor)"
				 << RESET << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout	<< YELLOW << "Dog created (Copy assignment)"
				 << RESET << std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << YELLOW << "Dog destroyed" << RESET << std::endl;
}

// -------------------------- //

void Dog::makeSound() const {
	std::cout << CYAN << "*Woof woof!*" << RESET << std::endl;
}