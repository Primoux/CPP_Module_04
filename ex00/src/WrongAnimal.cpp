/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:55:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 10:05:44 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "color.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal() : _type("Default")
{	
	cout << WANIMAL "Default WrongAnimal" BGREEN " created" RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	std::cout << ANIMAL "Copy of the WrongAnimal " << original << BGREEN " created" RESET << endl;

	this->_type = original._type;
}

WrongAnimal::~WrongAnimal()
{
	cout << WANIMAL "Default WrongAnimal" BRED " destroyed" RESET << endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}	return (*this);
}

const std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	cout << WANIMALCOLOR "*default WrongAnimal sound*" RESET << endl;
}
