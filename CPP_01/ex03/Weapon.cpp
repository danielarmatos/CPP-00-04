/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:45:14 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:45:16 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(const std::string &type) {
    this->type = type;
}

Weapon::~Weapon(void) {
}

const std::string Weapon::getType(void) {
    return (this->type);
}

void Weapon::setType(const std::string &type) {
    this->type = type;
}