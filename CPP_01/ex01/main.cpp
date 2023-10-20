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
Zombie* zombieHorde( int N, std::string name );

int main(int argc, char **argv)
{
	Zombie *zombies;
	if (argc < 2) {
		std::cout	<< "Pass the number of zombies as arguments"
					<< std::endl;
		return (0);
	}
	int size = atoi(argv[1]);
	if (argc == 2)
		zombies = zombieHorde(size, "Daniela");
	else
		zombies = zombieHorde(size, argv[2]);
	if (!zombies)
		return (0);
	for (int i = 0; i < size; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
