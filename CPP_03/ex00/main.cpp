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

int main(int argc, char **argv) {
	if (argc < 3) {
		std::cout	<< "Pass 2 ClapTrap names as arguments" << std::endl;
		return (0);
	}
	ClapTrap clap01(argv[1]);
	ClapTrap clap02(argv[2]);

	clap01.attack(argv[2]);
	clap02.takeDamage(0);

	clap02.attack(argv[1]);
	clap01.takeDamage(0);

	clap01.beRepaired(0);
	clap02.takeDamage(10);
	clap02.beRepaired(0);
	clap02.attack(argv[1]);
}
