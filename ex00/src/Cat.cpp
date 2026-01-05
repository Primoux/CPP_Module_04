/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:13:00 by enchevri          #+#    #+#             */
/*   Updated: 2026/01/05 18:03:23 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.h"
#include <iostream>

using std::endl;

Cat::Cat()
{
	std::cout << CAT "Cat" BGREEN " created" RESET << endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << CAT << "Cat" BRED " destroyed" RESET  << endl;
}

void Cat::makeSound(void)
{
	std::cout << CAT "*default sound*";
}