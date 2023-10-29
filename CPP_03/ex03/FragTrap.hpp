/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:22:28 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/24 19:22:29 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap &other);
	FragTrap& operator=(const FragTrap &other);
	~FragTrap();
	void highFivesGuy();
};

#endif