/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 09:50:18 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.h"
#include <iostream>

using std::endl;

int	main(void)
{
	/*THIS SHOULD NOT WORK*/
	// Animal a;
	// const Animal* meta = new Animal();
	/**********************/
	
	/*BUT THIS SHOULD WORK AS EXPECTED*/
	const Animal	*dog = new Dog();

	std::cout << "The " << dog->getType() << " sound is ";
	dog->makeSound();

	delete	dog;

	std::cout << BWHITE "----------------------------------------------------" RESET << endl;

	const Animal	*cat = new Cat();

	std::cout << "The " << cat->getType() << " sound is ";
	cat->makeSound();

	delete	cat;
	return (0);
}
