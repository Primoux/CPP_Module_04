/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/12 15:04:12 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "color.h"
#include <iostream>

using std::endl;

WrongCat::WrongCat()
{
	std::cout << WCAT WANIMALCOLOR "Animal:" WCATCOLOR "WrongCat" BGREEN " created" RESET << endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
	std::cout << ANIMAL "Copy of the WrongCat " RESET << original << BGREEN " created" RESET << endl;

	this->_type = original._type;
}

WrongCat::~WrongCat()
{
	std::cout << WCAT << "WrongCat" BRED " destroyed" RESET  << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}	return (*this);
}

std::ostream &operator<<(std::ostream &o, const WrongCat &obj)
{
	return (o << obj.getType());
}

void WrongCat::makeSound(void) const
{
	std::cout << WCATCOLOR "*bark bark*" RESET << endl;
}
