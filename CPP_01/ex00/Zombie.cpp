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
	std::cout << "Zombie destroyed" << std:endl;
}

void announce( void ) {
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name ) {

}

void randomChump( std::string name ) {

}
