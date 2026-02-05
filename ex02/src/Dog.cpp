/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 15:04:10 by enchevri         ###   ########lyon.fr   */
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
	this->_brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal(original)
{
	cout << DOG DOGCOLOR "Dog" BGREEN " copied" RESET << endl;
	this->_brain = new Brain(*original._brain);
}

Dog::~Dog()
{
	delete this->_brain;
	cout << DOG << "Dog" BRED " destroyed" RESET << endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
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
		cout << DOG << RESET << this->_brain->getIdea(i) << endl;
	}
}
