/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:58:49 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/23 11:32:26 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "A new cat arrives at home !" << std::endl; 
}

Cat::~Cat()
{
	std::cout << "Are you abandoning your cat ? Are you serious ?" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& copy)
{
	brain = new Brain(*copy.brain);
	*this = copy;
}

Cat&	Cat::operator=(const Cat& op)
{
	if (this != &op)
	{
		this->type = op.type;
		delete brain;
		brain = new Brain(*op.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* MEEEEEEEEOOOOOOOOOOOOW 😺 *" << std::endl;
}

Brain*	Cat::getBrain()
{
	return (brain);
}
