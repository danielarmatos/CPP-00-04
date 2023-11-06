/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:38:27 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 19:38:33 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	Brain& operator=(const Brain &other);
	~Brain();

};

#endif

