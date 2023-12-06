/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:29:08 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/14 15:29:10 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string getInput(const std::string &str)
{
	std::string	input;

	while (!std::cin.good() || input.length() == 0)
	{
		if (!std::cin.good())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		std::cout << str;
		std::getline(std::cin, input);
	}
	return (input);
}

int	main(void)
{
	int i = 0;
	std::string	input;
	PhoneBook	phoneBook01;

	std::cout	<< "\033[0;32m" << "Welcome to My Awesome PhoneBook!\n\n"
				<< "\033[0m";
	while (input != "EXIT")
	{
		std::cout << "Please select one of the following commands:\n";
		std::cout << "- ADD\n";
		std::cout << "- SEARCH\n";
		std::cout << "- EXIT\n\n";

		input = getInput("Your command: ");
		if (input == "ADD")
			i = phoneBook01.addContact(i);
		else if (input == "SEARCH")
			phoneBook01.searchContact();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "\033[0;31m" << "Error! Wrong command.\n" << "\033[0m";
	}
}
