/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:58:49 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/29 11:05:13 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "A new wrong cat arrives at home !" << std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "Are you abandoning your wrong cat ? Are you serious ?" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat& op)
{
	this->type = op.type;
	return (*this);
}

void	WrongCat::makeSound()
{
	std::cout << "* MEEEEEEEEOOOOOOOOOOOOW 😺 *" << std::endl;
}
