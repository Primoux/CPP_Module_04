/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzo <enzo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/21 17:47:33 by enzo             ###   ########.fr       */
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
}

Dog::~Dog()
{
	cout << DOG << "Dog" BRED " destroyed" RESET << endl;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	this->type = original.type;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << DOGCOLOR "*bark bark*" RESET << endl;
}
