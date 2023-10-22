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

int	main(void)
{
	Harl harl;

	std::cout	<< "\033[0;32m" << "DEBUG" << "\033[0m" << std::endl;
	harl.complain("debug") ;

	std::cout	<< "\033[0;32m" << "\nINFO" << "\033[0m" << std::endl;
	harl.complain("info");

	std::cout	<< "\033[0;32m" << "\nWARNING" << "\033[0m" << std::endl;
	harl.complain("warning");

	std::cout	<< "\033[0;32m" << "\nERROR" << "\033[0m" << std::endl;
	harl.complain("error");
}
