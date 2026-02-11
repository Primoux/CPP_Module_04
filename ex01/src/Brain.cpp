/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:30:47 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/11 11:04:25 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.h"
#include <iostream>
#include <ostream>
#include <sstream>


using std::endl;
using std::string;

static int gBrainId = 0;

Brain::Brain()
{
	std::cout << BRAIN "Default Brain" BGREEN " created" RESET << endl;
	this->_id = gBrainId++;
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		std::stringstream ss;
		ss << "Brain_" << this->_id << "_default_" << i;
		this->_ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &original)
{
	std::cout << BRAIN << "Copy of the brain " RESET << original << BGREEN " created" RESET << endl;

	this->_id = original._id;
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		this->_ideas[i] = original._ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << BRAIN << "Brain " << *this <<  BRED " destroyed" RESET << endl;
}

std::ostream &operator<<(std::ostream &o, const Brain &obj)
{
	return (o << obj.getId());
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
	int id = gBrainId++;
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

unsigned int Brain::getId(void) const
{
	return (this->_id);
}
