/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:52:09 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/14 18:52:10 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

bool checkPhoneNumber(const std::string &str)
{
	if (str.find_first_not_of("0123456789") == std::string::npos)
		return (true);
	return (false);
}

void PhoneBook::searchContact(void) {
	std::string input;
	if (contacts[0].getFirstName().empty()) {
		std::cout	<< "\033[0;31m" << "\nThere are no contacts in the list\n"
					<< "\033[0m" << std::endl;
		return ;
	}
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (int i = 0; (i < 8 && !(contacts[i].getFirstName().empty())); i++) {
		std::cout << "|" << std::setw(10) << i;
		contacts[i].displayTable();
	}
	int nb;
	while (input.empty()) {
		input = getInput("Select an index: ");
		if (checkPhoneNumber(input))
		{
			nb = atoi(input.c_str());
			if (nb < 0 || nb > 7)
				input.clear();
			else if (contacts[nb].getFirstName().empty())
				input.clear();
			else
				contacts[nb].displayContact();
		}
		else
			input.clear();
	}
}

int	PhoneBook::addContact(int i) {
	std::string	input;

	if (i == 8)
		i = 0;
	while (input.empty()) {
		input = getInput("First name: ");
		contacts[i].setFirstName(input);
	}
	input.clear();
	while (input.empty()) {
		input = getInput("Last name: ");
		contacts[i].setLastName(input);
	}
	input.clear();
	while (input.empty()) {
		input = getInput("Nickname: ");
		contacts[i].setNickname(input);
	}
	input.clear();
	while (input.empty()) {
		input = getInput("Phone number: ");
		if (!checkPhoneNumber(input))
			input.clear();
		contacts[i].setPhoneNumber(input);
	}
	input.clear();
	while (input.empty()) {
		input = getInput("Darkest secret: ");
		contacts[i].setDarkestSecret(input);
	}
	std::cout	<< "\033[0;32m" << "Contact successfully added!\n"
				<< "\033[0m" << std::endl;
	i++;
	return (i);
};

PhoneBook::PhoneBook() {
};

PhoneBook::~PhoneBook() {
};