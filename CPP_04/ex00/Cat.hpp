/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:38 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:39 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
private:

public:
	Cat();
	Cat(std::string name);
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();

	void makeSound();
};

#endif
