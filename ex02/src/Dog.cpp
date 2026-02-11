/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 11:11:47 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "color.h"
#include <iostream>


using std::endl;
using std::string;

Dog::Dog()
{
	std::cout << DOG ANIMALCOLOR "Animal:" DOGCOLOR "Dog" BGREEN " created" RESET << endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << DOG DOGCOLOR "Dog" BGREEN " copied" RESET << endl;
	this->_brain = new Brain(*original._brain);
}

Dog::~Dog()
{
	std::cout << DOG << "Dog" BRED " destroyed" RESET << endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << DOG "Operator = called for Dog" RESET << endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Dog &obj)
{
	return (o << obj.getType());
}

void Dog::makeSound(void) const
{
	std::cout << DOGCOLOR "*bark bark*" RESET << endl;
}

void Dog::setIdea(const std::string& idea)
{
    this->_brain->setIdea(idea);
}

void Dog::printBrain(void) const
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		std::cout << DOG << RESET << this->_brain->getIdea(i) << endl;
	}
}
