/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:49:19 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 13:13:09 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default type") {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria&	AMateria::operator=(const AMateria& op)
{
	this->_type = op._type;
	return (*this);
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "Default attack on " << target.getName() << std::endl;
}