/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:42:55 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:42:57 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(int argc, char **argv)
{
	Zombie *zombie1;
	if (argc < 2) {
		std::cout	<< "Pass the newZombie and randomChump names as arguments"
					<< std::endl;
		return (0);
	}
	zombie1 = newZombie(argv[1]);
	if (argc > 2)
		randomChump(argv[2]);
	delete zombie1;
	return (0);
}
