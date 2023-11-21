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
	const Animal* meta = new Animal();
	std::cout << "Type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	const Animal* j = new Dog();
	std::cout << "Type: " << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl;

	const Animal* i = new Cat();
	std::cout << "Type: " << i->getType() << std::endl;
	i->makeSound();

	std::cout << std::endl << "Wrong animals:" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	std::cout << "Type: " << wrongMeta->getType() << std::endl;
	wrongMeta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongI = new WrongCat();
	std::cout << "Type: " << wrongI->getType() << std::endl;
	wrongI->makeSound();
	std::cout << std::endl;

	const WrongCat* wrongC = new WrongCat();
	std::cout << "Type: " << wrongC->getType() << std::endl;
	wrongC->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	delete(wrongI);
	delete(wrongMeta);
	delete(wrongC);
}