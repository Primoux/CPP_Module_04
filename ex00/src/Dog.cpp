/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:27:42 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/12 11:34:23 by enchevri         ###   ########lyon.fr   */
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
	cout << DOG "Dog" BGREEN " created from " ANIMAL RESET << endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	cout << DOG << "Dog" BRED " destroyed" RESET  << endl;
}

void Dog::makeSound(void) const
{
	cout << DOGCOLOR "*bark bark*" RESET << endl;
}