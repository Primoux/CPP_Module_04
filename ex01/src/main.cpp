/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/12 17:03:47 by enchevri         ###   ########lyon.fr   */
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
	// dog->lookInside();

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
	meta->lookInside();

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
	const Animal	*cat1 = new Cat();
	const Animal	*cat2 = new Cat();

	std::cout << "The " << cat->getType() << " sound is ";
	cat->makeSound();

	std::cout << BWHITE "Before swap-----------------------------------------" RESET << endl;
	cat1->lookInside();
	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	
	cat2->lookInside();
	std::cout << BWHITE "After Swap------------------------------------------" RESET << endl;
	cat2 = cat1;

	cat2->lookInside();
	return (0);
}
