/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 11:25:41 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "color.h"
#include <iostream>

using std::endl;
using std::string;

Dog::Dog() : Animal()
{
	std::cout << DOG ANIMALCOLOR "Animal:" DOGCOLOR "Dog" BGREEN " created" RESET << endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << ANIMAL "Copy of the Dog " RESET << original << BGREEN " created" RESET << endl;
	this->_type = original._type;
}

Dog::~Dog()
{
	std::cout << DOG << "Dog" BRED " destroyed" RESET << endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << DOG "Operator = called for Dog" RESET << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
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
