/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:48:17 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 12:50:41 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default type")
{
	std::cout << "The animals are coming..." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Let's says good bye to the animals..." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal&	Animal::operator=(const Animal& op)
{
	this->type = op.type;
	return (*this);
}

void	Animal::makeSound()
{
	std::cout << "It can not make sounds" << std::endl;
}