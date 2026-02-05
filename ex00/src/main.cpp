/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 12:51:43 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "color.h"
#include <iostream>

using std::endl;

int	main(void)
{
	std::cout << BBLUE "\n=== Animal ===" RESET << endl;
	
	const Animal	*meta = new Animal();
	std::cout << "The " << meta->getType() << " sound is ";
	meta->makeSound();
	delete	meta;
	
	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BBLUE "\n=== Dog ===" RESET << endl;

	const Animal	*dog = new Dog();
	std::cout << "The " << dog->getType() << " sound is ";
	dog->makeSound();
	delete	dog;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BBLUE "\n=== Cat ===" RESET << endl;

	const Animal	*cat = new Cat();
	std::cout << "The " << cat->getType() << " sound is ";
	cat->makeSound();
	delete	cat;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BBLUE "\n=== Wrong Animal ===" RESET << endl;

	const WrongAnimal	*wrongMeta = new WrongAnimal();
	std::cout << "The " << wrongMeta->getType() << " sound is ";
	wrongMeta->makeSound();
	delete	wrongMeta;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BBLUE "\n=== Wrong Cat ===" RESET << endl;

	const WrongCat	*wrongCat = new WrongCat();
	std::cout << "The " << wrongCat->getType() << " sound is ";
	wrongCat->makeSound();
	delete	wrongCat;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	std::cout << BBLUE "\n=== *Wrong Cat ===" RESET << endl;

	const WrongAnimal	*wrongAnimalCat = new WrongCat();
	std::cout << "The " << wrongAnimalCat->getType() << " sound is ";
	wrongAnimalCat->makeSound();
	delete	wrongAnimalCat;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	std::cout << BBLUE "\n=== Additional Tests with Array ===" RESET << endl;
	const Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	std::cout << "\n" << BWHITE "Testing polymorphism in array:" RESET << endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Animal[" << i << "] type: " << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	std::cout << "\n" << BWHITE "Deleting animals:" RESET << endl;
	for (int i = 0; i < 2; i++)
	{
		delete animals[i];
	}

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	std::cout << BBLUE "\n=== Additional Tests with Array ===" RESET << endl;
	const WrongAnimal* wrongAnimal[2];
	wrongAnimal[0] = new WrongCat();
	wrongAnimal[1] = new WrongCat();

	std::cout << "\n" << BWHITE "Testing polymorphism in array:" RESET << endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Animal[" << i << "] type: " << wrongAnimal[i]->getType() << " says: ";
		wrongAnimal[i]->makeSound();
	}

	std::cout << "\n" << BWHITE "Deleting wrongAnimal:" RESET << endl;
	for (int i = 0; i < 2; i++)
	{
		delete wrongAnimal[i];
	}
	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	return (0);
}
