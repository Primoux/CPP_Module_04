/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 14:55:01 by enchevri         ###   ########lyon.fr   */
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

	std::cout << BCYAN "Test deep copy:" RESET << endl;
	Dog basic;
	std::cout << BWHITE "Basic dog created" RESET << endl;
	{
		Dog copy = basic;
		std::cout << BWHITE "Copy created, both should exist" RESET << endl;
	} 
	std::cout << BWHITE "Copy destroyed, basic should still work" RESET << endl;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;
	return (0);
}
