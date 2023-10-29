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
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout	<< YELLOW <<  "DiamondTrap created"
				 << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout	<< YELLOW << "DiamondTrap " << this->name << " created" << RESET
				 << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
	std::cout	<< YELLOW << "DiamondTrap created (Copy constructor)"
				<< RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		ClapTrap::name = (name + "_clap_name");
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout	<< YELLOW << "DiamondTrap " << this->name
				 << " created (Copy assignment)" << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout	<< YELLOW <<  "DiamondTrap destroyed"
				 << RESET << std::endl;
}

// -------------------------- //


void DiamondTrap::whoAmI() {
	std::cout	<< CYAN << "My name is " << this->name
				<< ". My ClapTrap name is " << ClapTrap::name
				<< RESET << std::endl;
}