/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:02 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 15:57:06 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is building himself..." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is... off" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		*this = copy;
}

Brain&	Brain::operator=(const Brain& op)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
	else
		std::cerr << "Error in setIdea" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return ideas[i];
	else
	{
		std::cerr << "Error in getIdea" << std::endl;
		return "";
	}
}
