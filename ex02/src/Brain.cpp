/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchevri <enchevri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:30:47 by enchevri          #+#    #+#             */
/*   Updated: 2026/02/05 15:06:29 by enchevri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
using std::string;

static int g_brainId = 0;

Brain::Brain()
{
	int id = g_brainId++;
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		std::stringstream ss;
		ss << "Brain_" << id << "_idea_" << i;
		this->_ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; i++)
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
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
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