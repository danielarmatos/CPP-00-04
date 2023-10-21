/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:45:39 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:45:40 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA() {
}

HumanA::HumanA(const std::string &name, Weapon &weapon) {
    this->name = name;
    this->weapon = &weapon;
}

HumanA::~HumanA() {
}

void HumanA::attack(void) {
    std::cout   << this->name << " attacks with their "
                << this->weapon->getType() << std::endl;
}

