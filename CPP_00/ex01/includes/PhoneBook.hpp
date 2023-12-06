/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:52:14 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/14 18:52:18 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include "iomanip"

#include "Contact.hpp"

std::string getInput(const std::string &str);

class PhoneBook {
private:
	Contact contacts[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	int	addContact(int i);
	void searchContact(void);
};

#endif
