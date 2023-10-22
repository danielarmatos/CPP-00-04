/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:45:52 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:45:54 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {
}

HumanB::HumanB(const std::string &name) {
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::attack(void) {
	if (!this->weapon)
	{
		std::cout << this->name << " attacks with no weapon" << std::endl;
		return ;
	}
    std::cout   << this->name << " attacks with their "
                << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
