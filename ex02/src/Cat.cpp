/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/12 16:58:11 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.h"
#include <iostream>

using std::cout;
using std::endl;

Cat::Cat()
{
	cout << CAT ANIMALCOLOR "Animal:" CATCOLOR "Cat" BGREEN " created" RESET << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	cout << CAT << "Cat" BRED " destroyed" RESET  << endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	cout << CAT CATCOLOR "Cat" BGREEN " copied" RESET << endl;
	this->brain = new Brain(*original.brain);
}

Cat &Cat::operator=(const Cat &other)
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

void Cat::makeSound(void) const
{
	std::cout << CATCOLOR "*miaou miaou*" RESET << endl;
}

void Cat::lookInside(void) const
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		cout << CAT RESET<< this->brain->getIdea(i) << endl;
	}
}

