/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:29:18 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/14 15:29:20 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "iomanip"

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string phoneNumber;
	std::string	darkestSecret;
public:
	Contact(void);
	~Contact(void);
	void	setFirstName(const std::string &str);
	void	setLastName(const std::string &str);
	void	setNickname(const std::string &str);
	void	setPhoneNumber(const std::string &str);
	void	setDarkestSecret(const std::string &str);
	void	displayTable(void);
	void	displayContact(void);
	std::string getFirstName(void);
};

#endif
