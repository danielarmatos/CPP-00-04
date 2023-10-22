/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:27:40 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 16:27:42 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug( void ) {
	std::cout << 	"\033[0;32m" << "[ DEBUG ]" << "\033[0m" << std::endl;
	std::cout <<	"I love having extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup burger. "
					"I really do!\n" << std::endl;
}

void Harl::info( void ) {
	std::cout << 	"\033[0;32m" << "[ INFO ]" << "\033[0m" << std::endl;
	std::cout <<	"I cannot believe adding extra bacon costs more money. "
					"You didn’t put enough bacon in my burger! "
					"If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ) {
	std::cout << 	"\033[0;32m" << "[ WARNING ]" << "\033[0m" << std::endl;
	std::cout <<	"I think I deserve to have some extra bacon for free. "
					"I’ve been coming for years whereas you started working "
					"here since last month.\n" << std::endl;
}

void Harl::error( void ) {
	std::cout << 	"\033[0;32m" << "[ ERROR ]" << "\033[0m" << std::endl;
	std::cout	<< "This is unacceptable! I want to speak to the manager now.\n"
				<< std::endl;
}

void Harl::complain( std::string level ) {
	std::string options[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])() = {
			&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	for (int i = 0; i < 4; i++) {
		if (options[i] == level)
			(this->*functions[i])();
	}
}

