/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:22:59 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:23:02 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout	<< YELLOW <<  "DiamondTrap created"
				 << RESET << std::endl;
}

/*DiamondTrap::DiamondTrap(std::string name) {
*//*	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;*//*
	std::cout	<< YELLOW << "DiamondTrap " << this->name << " created" << RESET
				 << std::endl;
}*/

DiamondTrap::~DiamondTrap() {
	std::cout	<< YELLOW <<  "DiamondTrap destroyed"
				 << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	*this = other;
	std::cout	<< YELLOW << "DiamondTrap " << this->name
				 << " created (Copy constructor)" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout	<< YELLOW << "DiamondTrap " << this->name
				 << " created (Copy assignment)" << RESET << std::endl;
	return (*this);
}


// -------------------------- //


void DiamondTrap::whoAmI() {
	std::cout	<< CYAN << "My name is " << this->name
				<< ". My ClapTrap name is " << ClapTrap::name
				<< RESET << std::endl;
}