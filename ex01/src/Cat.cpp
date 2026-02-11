/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 09:52:48 by enchevri         ###   ########lyon.fr   */
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
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &original) : Animal(original)
{
	cout << CAT CATCOLOR "Cat" BGREEN " copied" RESET << endl;
	this->_brain = new Brain(*original._brain);
}

Cat::~Cat()
{
	cout << CAT << "Cat" BRED " destroyed" RESET  << endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << DOG "Operator = called for cat" RESET << std::endl;
	if (this != &other) 
	{
		Animal::operator=(other);
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain); 
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Cat &obj)
{
	return (o << obj.getType());
}

void Cat::makeSound(void) const
{
	std::cout << CATCOLOR "*miaou miaou*" RESET << endl;
}

void Cat::setIdea(const std::string& idea)
{
    this->_brain->setIdea(idea);
}

void Cat::printBrain(void) const
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		cout << CAT RESET<< this->_brain->getIdea(i) << endl;
	}
}

