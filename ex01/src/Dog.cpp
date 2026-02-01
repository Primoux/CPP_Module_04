/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/01 16:43:23 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "color.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Dog::Dog()
{
	cout << DOG ANIMALCOLOR "Animal:" DOGCOLOR "Dog" BGREEN " created" RESET << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal(original)
{
	cout << DOG DOGCOLOR "Dog" BGREEN " copied" RESET << endl;
	this->brain = new Brain(*original.brain);
}

Dog::~Dog()
{
	delete this->brain;
	cout << DOG << "Dog" BRED " destroyed" RESET << endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << DOGCOLOR "*bark bark*" RESET << endl;
}

void Dog::printBrain(void) const
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		cout << DOG << RESET << this->brain->getIdea(i) << endl;
	}
}
