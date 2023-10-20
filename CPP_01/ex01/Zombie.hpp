/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:43:07 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:43:08 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

class Zombie {
private:
	std::string name;

public:
	Zombie( void );
	~Zombie ( void );
	void announce( void );
	void setName( std::string name);
};

#endif