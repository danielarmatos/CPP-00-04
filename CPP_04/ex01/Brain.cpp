/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:38:22 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 19:38:23 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain() {
	std::cout << YELLOW << "Brain created" << RESET<< std::endl;
}

Brain::Brain(const Brain& other) {
	*this = other;
	std::cout	<< YELLOW << "Brain created (Copy constructor)"
				 << RESET << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
	if (this != &other) {
		std::copy(other.ideas->begin(), other.ideas->end(), this->ideas->begin());
	}
	std::cout	<< YELLOW << "Brain created (Copy assignment)"
				 << RESET << std::endl;
	return (*this);
}

Brain::~Brain() {
	std::cout << YELLOW << "Brain destroyed" << RESET << std::endl;
}

// -------------------------- //


