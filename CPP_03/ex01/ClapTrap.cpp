/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:21:37 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:21:40 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10),
					   energyPoints(10), attackDamage(0) {
	std::cout << YELLOW << "ClapTrap created" << RESET<< std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :	name(name), hitPoints(10),
										energyPoints(10), attackDamage(0) {
	std::cout	<< YELLOW << "ClapTrap " << this->name << " created" << RESET
				<< std::endl;
}

ClapTrap::~ClapTrap() {
	if (this->name.empty())
		std::cout << YELLOW << "ClapTrap destroyed" << RESET << std::endl;
	else
		std::cout	<< YELLOW << "ClapTrap " << this->name << " destroyed"
					<< RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout	<< YELLOW << "ClapTrap " << this->name
				<< " created (Copy constructor)" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout	<< YELLOW << "ClapTrap " << this->name
				 << " created (Copy assignment)" << RESET << std::endl;
	return (*this);
}

// -------------------------- //

void ClapTrap::attack(const std::string& target) {
	if (target.empty())
		return ;
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout	<< RED << "ClapTrap " << this->name
					<< " doesn't have enough energy or hit points to attack"
					<< RESET << std::endl
					<< "Energy points: " << this->energyPoints << std::endl
					<< "Hit points: " << this->hitPoints << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << CYAN << "ClapTrap " << this->name << " attacks " << target <<
				 ", causing " << this->attackDamage << " points of damage!"
				 << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout	<< MAGENTA << "ClapTrap " << this->name << " takes " << amount
				<< " points of damage" << std::endl
				<< "Hit points: " << this->hitPoints << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout	<< RED << "ClapTrap " << this->name
					<< " doesn't have enough energy or hit points to be repaired"
					<< RESET << std::endl
					<< "Energy points: " << this->energyPoints << std::endl
					<< "Hit points: " << this->hitPoints << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout	<< GREEN << "ClapTrap " << this->name << " was repaired with "
				<< amount << " points" << std::endl
				<< "Hit points: " << this->hitPoints << RESET << std::endl;
}