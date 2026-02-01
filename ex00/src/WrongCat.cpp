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
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
	this->type = original.type;
}

WrongCat::~WrongCat()
{
	std::cout << WCAT << "WrongCat" BRED " destroyed" RESET  << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << WCATCOLOR "*bark bark*" RESET << endl;
}
