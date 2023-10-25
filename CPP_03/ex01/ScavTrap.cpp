/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:22:07 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:22:08 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout	<< YELLOW <<  "ScavTrap created"
				<< RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout	<< YELLOW << "ScavTrap " << this->name << " created" << RESET
				 << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout	<< YELLOW <<  "ScavTrap destroyed"
				 << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
	std::cout	<< YELLOW << "ScavTrap " << this->name
				 << " created (Copy constructor)" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout	<< YELLOW << "ScavTrap " << this->name
				 << " created (Copy assignment)" << RESET << std::endl;
	return (*this);
}


// -------------------------- //


void ScavTrap::guardGate() {
	std::cout	<< CYAN << "ScavTrap " << this->name
				<< " is now in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (target.empty())
		return ;
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout	<< RED << "ScavTrap " << this->name
					 << " doesn't have enough energy or hit points to attack"
					 << RESET << std::endl
					 << "Energy points: " << this->energyPoints << std::endl
					 << "Hit points: " << this->hitPoints << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << CYAN << "ScavTrap " << this->name << " attacks " << target <<
			  ", causing " << this->attackDamage << " points of damage!"
			  << RESET << std::endl;
}