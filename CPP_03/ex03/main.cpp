/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:21:26 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:21:27 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(int argc, char **argv) {
	if (argc < 3) {
		std::cout	<< "Pass 2 ScavTrap names as arguments" << std::endl;
		return (0);
	}
	DiamondTrap trap (argv[1]);
	DiamondTrap trap2 (argv[2]);
	trap.attack(argv[2]);
	trap2.takeDamage(30);
	trap.beRepaired(5);
	trap.takeDamage(5);
	trap.highFivesGuy();
	trap.whoAmI();
}
