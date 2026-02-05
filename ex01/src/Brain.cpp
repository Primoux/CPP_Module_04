/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:30:47 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 14:16:18 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::endl;

static int g_brainId = 0;

Brain::Brain()
{
	int id = g_brainId++;
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		std::stringstream ss;
		ss << "Brain_" << id << "_default_" << i;
		this->_ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		this->_ideas[i] = original._ideas[i];
	}
}

Brain::~Brain()
{
	cout << BRAIN << "Brain" BRED " destroyed" RESET << endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << BRAIN "Operator = called for Brain" RESET << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

void Brain::setIdea(const string &idea)
{
	int id = g_brainId++;
	for (int i = 0;i < MAX_IDEAS; i++)
	{
		std::stringstream ss;
		ss << "Brain_" << id << "_" << idea << "_" << i;
		this->_ideas[i] = ss.str();
	}
}

const string Brain::getIdea(unsigned int index)
{
	return (this->_ideas[index]);
}