/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:58:49 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 12:56:35 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A new cat arrives at home !" << std::endl; 
}

Cat::~Cat()
{
	std::cout << "Are you abandoning your cat ? Are you serious ?" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat&	Cat::operator=(const Cat& op)
{
	this->type = op.type;
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "* MEEEEEEEEOOOOOOOOOOOOW 😺 *" << std::endl;
}