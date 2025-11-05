/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:59:46 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 12:56:32 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A new dog arrives at home !" << std::endl; 
}

Dog::~Dog()
{
	std::cout << "Are you abandoning your dog ? Are you serious ?" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog&	Dog::operator=(const Dog& op)
{
	this->type = op.type;
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "* WOOOOOOOOOOOOOOOOOOF ​🐕 *" << std::endl;
}