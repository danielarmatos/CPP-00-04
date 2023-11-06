/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:33 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:35 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << YELLOW << "Cat created" << RESET<< std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout	<< YELLOW << "Cat created (Copy constructor)"
				 << RESET << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout	<< YELLOW << "Cat created (Copy assignment)"
				 << RESET << std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << YELLOW << "Cat destroyed" << RESET << std::endl;
}

// -------------------------- //

void Cat::makeSound() {
	std::cout << "Miau!" << std::endl;
}
