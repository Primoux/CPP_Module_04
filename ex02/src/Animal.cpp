/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/01 16:43:32 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "color.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Animal::Animal() : type("Default")
{
	cout << ANIMAL "Default Animal" BGREEN " created" RESET << endl;
}

Animal::Animal(const Animal &original)
{
	this->type = original.type;
}

Animal::~Animal()
{
	cout << ANIMAL << "Default Animal" BRED " destroyed" RESET << endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

const string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	cout << ANIMALCOLOR "*default Animal sound*" RESET << endl;
}

void Animal::printBrain(void) const
{
	cout << ANIMAL "No brain inside default Animal" RESET << endl;
}
