/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/01 16:37:23 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.h"
// #include "WrongCat.hpp"
// #include "WrongAnimal.hpp"
#include <iostream>

using std::endl;

int	main(void)
{
	std::cout << BWHITE "----------------------------------------------------" RESET << endl;


	const Animal	*dog = new Dog();

	std::cout << "The " << dog->getType() << " sound is ";
	dog->makeSound();

	delete	dog;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	const Animal	*cat = new Cat();

	std::cout << "The " << cat->getType() << " sound is ";
	cat->makeSound();

	delete	cat;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;


	const Animal	*meta = new Animal();

	std::cout << "The " << meta->getType() << " sound is ";
	meta->makeSound();
	meta->printBrain();

	delete	meta;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;


	// const WrongAnimal	*wrongMeta = new WrongAnimal();

	// std::cout << "The " << wrongMeta->getType() << " sound is ";
	// wrongMeta->makeSound();

	// delete	wrongMeta;

	// std::cout << BWHITE "----------------------------------------------------" RESET << endl;


	// const WrongCat	*wrongCat = new WrongCat();
	
	// std::cout << "The " << wrongCat->getType() << " sound is ";
	// wrongCat->makeSound();

	// delete	wrongCat;

	// std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	std::cout << BCYAN "Test copy constructor (stack objects):" RESET << endl;
	Cat cat1;
	std::cout << BWHITE "cat1 created" RESET << endl;
	std::cout << BWHITE "Content of cat1:" RESET << endl;
	cat1.printBrain();

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	Cat cat2 = cat1;
	std::cout << BWHITE "cat2 created as copy of cat1" RESET << endl;
	std::cout << BWHITE "Content of cat2:" RESET << endl;
	cat2.printBrain();

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BCYAN "Test operator= (assignment):" RESET << endl;

	Cat cat3;
	std::cout << BWHITE "cat3 created" RESET << endl;
	std::cout << BWHITE "Assigning cat1 to cat3..." RESET << endl;
	cat3 = cat1;
	std::cout << BWHITE "Content of cat3 (should be same as cat1):" RESET << endl;
	cat3.printBrain();

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	return (0);
}
