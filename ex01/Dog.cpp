/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:59:46 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 15:32:58 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	std::cout << "A new dog arrives at home !" << std::endl; 
}

Dog::~Dog()
{
	std::cout << "Are you abandoning your dog ? Are you serious ?" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& copy)
{
	brain = new Brain(*copy.brain);
	*this = copy;
}

Dog&	Dog::operator=(const Dog& op)
{
	if (this != &op)
	{
		this->type = op.type;
		delete brain;
		brain = new Brain(*op.brain);
	}
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "* WOOOOOOOOOOOOOOOOOOF ​🐕 *" << std::endl;
}

Brain*	Dog::getBrain()
{
	return (brain);
}
