/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/05 16:01:05 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Animal.h"
#include <iostream>

using std::endl;

Animal::Animal() : type("Default")
{
	std::cout << ANIMAL "DEFAULT ANIMAL" BGREEN " created" RESET << endl;
}

Animal::~Animal()
{
	std::cout << ANIMAL << "DEFAULT ANIMAL" BRED " destroyed" RESET  << endl;
}

void Animal::makeSound(void)
{
	std::cout << ANIMAL "*default sound*";
}