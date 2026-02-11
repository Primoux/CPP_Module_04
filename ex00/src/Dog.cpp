/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 10:08:06 by enchevri         ###   ########lyon.fr   */
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
	this->_type = "Dog";
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << ANIMAL "Copy of the Dog " RESET << original << BGREEN " created" RESET << endl;
	this->_type = original._type;
}

Dog::~Dog()
{
	cout << DOG << "Dog" BRED " destroyed" RESET << endl;
}

Dog &Dog::operator=(const Dog &other)
{
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
	cout << DOGCOLOR "*bark bark*" RESET << endl;
}
