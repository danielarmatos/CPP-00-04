/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:24 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/11/06 17:34:27 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int numb = 11;
	int x = 0;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl;

	const Animal* animals[numb];
	while (x < (numb/2))
		animals[x++] = new Dog();
	while (x < numb)
		animals[x++] = new Cat();

	std::cout << std::endl;

	for (int x = 0; x < numb; x++)
		delete animals[x];

	std::cout << std::endl;

	Dog basic;
	std::cout << std::endl;
	Dog tmp = basic;
	std::cout << std::endl;
	return 0;
}