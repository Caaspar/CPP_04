/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:48:17 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 15:33:12 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default wrong type")
{
	std::cout << "The wrong animals are coming..." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Let's says good bye to the wrong animals..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& op)
{
	this->type = op.type;
	return (*this);
}

void	WrongAnimal::makeSound()
{
	std::cout << "The wrong animals can not make sounds" << std::endl;
}
