/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 09:52:37 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "color.h"
#include <iostream>
#include <ostream>

using std::cout;
using std::endl;
using std::string;

Animal::Animal() : _type("Default")
{
	cout << ANIMAL "Default Animal" BGREEN " created" RESET << endl;
}

Animal::Animal(const Animal &original)
{
	this->_type = original._type;
}

Animal::~Animal()
{
	cout << ANIMAL << "Default Animal" BRED " destroyed" RESET << endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Animal &obj)
{
	return (o << obj.getType());
}

const string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	cout << ANIMALCOLOR "*default Animal sound*" RESET << endl;
}

void Animal::printBrain(void) const
{
	cout << ANIMAL "No brain inside default Animal" RESET << endl;
}
