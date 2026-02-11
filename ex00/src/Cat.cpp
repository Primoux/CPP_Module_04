/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 10:13:40 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.h"
#include <iostream>

using std::endl;

Cat::Cat() : Animal()
{
	std::cout << CAT ANIMALCOLOR "Animal:" CATCOLOR "Cat" BGREEN " created" RESET << endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &original) : Animal(original)
{
	std::cout << ANIMAL "Copy of the Cat " RESET << original << BGREEN " created" RESET << endl;

	this->_type = original._type;
}

Cat::~Cat()
{
	std::cout << CAT << "Cat" BRED " destroyed" RESET  << endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Cat &obj)
{
	return (o << obj.getType());
}

void Cat::makeSound(void) const
{
	std::cout << CATCOLOR "*miaou miaou*" RESET << endl;
}
