/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:55:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 11:26:25 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "color.h"
#include <iostream>
#include <string>

using std::endl;

WrongAnimal::WrongAnimal() : _type("Default")
{	
	std::cout << WANIMAL "Default WrongAnimal" BGREEN " created" RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	std::cout << ANIMAL "Copy of the WrongAnimal " RESET << original << BGREEN " created" RESET << endl;

	this->_type = original._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << WANIMAL "Default WrongAnimal" BRED " destroyed" RESET << endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << ANIMAL "Operator = called for WrongAnimal" RESET << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}	return (*this);
}

std::ostream &operator<<(std::ostream &o, const WrongAnimal &obj)
{
	return (o << obj.getType());
}

const std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << WANIMALCOLOR "*default WrongAnimal sound*" RESET << endl;
}
