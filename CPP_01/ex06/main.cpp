/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:27:28 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 16:27:29 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2) {
		std::cout	<< "\033[0;31m" << "Please pass a valid argument: \n"
					<< "\033[0m";
		std::cout <<	"DEBUG\n"
						"INFO\n"
						"WARNING\n"
						"ERROR" << std::endl;
		return (1);
	}
	Harl harl;
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int y = -1;
	for (int i = 0; i < 4; i++) {
		if (options[i] == argv[1])
			y = i;
	}
	switch (y)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;
			break ;
		case 0:
			harl.complain("debug");
		case 1:
			harl.complain("info");
		case 2:
			harl.complain("warning");
		case 3:
			harl.complain("error");
	}
}
