/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:55:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/01 16:42:34 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "color.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal() : type("Default")
{	
	cout << WANIMAL "Default WrongAnimal" BGREEN " created" RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	this->type = original.type;
}

WrongAnimal::~WrongAnimal()
{
	cout << WANIMAL "Default WrongAnimal" BRED " destroyed" RESET << endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

const std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	cout << WANIMALCOLOR "*default WrongAnimal sound*" RESET << endl;
}
