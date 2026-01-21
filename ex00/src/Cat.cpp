/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzo <enzo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/21 17:47:32 by enzo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.h"
#include <iostream>

using std::endl;

Cat::Cat()
{
	std::cout << CAT ANIMALCOLOR "Animal:" CATCOLOR "Cat" BGREEN " created" RESET << endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << CAT << "Cat" BRED " destroyed" RESET  << endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	this->type = original.type;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << CATCOLOR "*miaou miaou*" RESET << endl;
}
