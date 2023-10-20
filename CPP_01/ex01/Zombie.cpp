/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:43:14 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:43:15 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout  << this->name << ": Zombie destroyed" << std::endl;
}

void Zombie::setName( std::string name) {
	this->name = name;
}

void Zombie::announce( void ) {
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
