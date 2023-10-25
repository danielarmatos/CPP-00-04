/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:22:23 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:22:24 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout	<< YELLOW <<  "FragTrap created"
				 << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout	<< YELLOW << "FragTrap " << this->name << " created" << RESET
				 << std::endl;
}

FragTrap::~FragTrap() {
	std::cout	<< YELLOW <<  "FragTrap destroyed"
				 << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
	std::cout	<< YELLOW << "FragTrap " << this->name
				 << " created (Copy constructor)" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout	<< YELLOW << "FragTrap " << this->name
				 << " created (Copy assignment)" << RESET << std::endl;
	return (*this);
}


// -------------------------- //


void FragTrap::highFivesGuy() {
	std::cout	<< CYAN << "FragTrap " << this->name
				 << " is giving a high five!" << RESET << std::endl;
}

