/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:52:25 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/14 18:52:26 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

std::string formatValue(const std::string &str) {
	if (str.length() > 10) {
		std::string result = str.substr(0, 9);
		result = result + ".";
		return (result);
	}
	return (str);
}

void Contact::displayContact(void) {
	if (this->firstName.empty())
		return ;
	std::cout << "\nFirst name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl << std::endl;
}

std::string Contact::getFirstName(void) {
	return (this->firstName);
}

void Contact::displayTable(void) {
	if (this->firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << formatValue(this->firstName);
	std::cout << "|" << std::setw(10) << formatValue(this->lastName);
	std::cout << "|" << std::setw(10) << formatValue(this->nickname) << "|" << std::endl;
}

void Contact::setDarkestSecret(const std::string &str) {
	this->darkestSecret = str;
}

void Contact::setPhoneNumber(const std::string &str) {
	this->phoneNumber = str;
}

void Contact::setNickname(const std::string &str) {
	this->nickname = str;
}

void Contact::setLastName(const std::string &str) {
	this->lastName = str;
}

void Contact::setFirstName(const std::string &str) {
	this->firstName = str;
}

Contact::Contact() {
};

Contact::~Contact() {
};
