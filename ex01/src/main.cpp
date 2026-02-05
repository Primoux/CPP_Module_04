/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:32 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 14:20:10 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.h"
#include <iostream>
#include <ostream>

#define MAX_ANIMAL 10
using std::endl;

int	main(void)
{
	const Animal* animals[MAX_ANIMAL];
	for (int i = 0;i < MAX_ANIMAL;i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	std::cout << BWHITE "---------------------------------------------------" RESET<< endl;
	for (int i = 0; i < MAX_ANIMAL; i++)
	{
		std::cout << BGREEN << i << " The animal " << *animals[i] << RESET << endl;
		animals[i]->printBrain();
	}
	std::cout << BWHITE "---------------------------------------------------" RESET<< endl;
	for (int i = 0;i < MAX_ANIMAL; i++)
	{
		delete animals[i];
	}

	std::cout << BWHITE "---------------------------------------------------" RESET<< endl;

	Dog dog1;
	Dog dog2;
	dog1.setIdea("no");
	std::cout << BWHITE "Should be no---------------------------------------------------" RESET<< endl;
	dog1.printBrain();
	dog2 = dog1;
	dog1.setIdea("yes");
	std::cout << BWHITE "Should be yes---------------------------------------------------" RESET<< endl;
	dog1.printBrain();
	std::cout << BWHITE "Should be no---------------------------------------------------" RESET<< endl;
	dog2.printBrain();

	return (0);
}
