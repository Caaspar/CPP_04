/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:26:06 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 17:12:52 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete (_materia[i]);
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& op)
{
	if (this != &op)
    { 
        for (int i = 0; i < 4; i++)
        {
            if (_materia[i])
                delete _materia[i];
            if (op._materia[i])
                _materia[i] = op._materia[i]->clone();
            else
                _materia[i] = NULL;
        }
    }
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "The materia can't be null" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			std::cout << "Learned materia of type " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "The stock of materia is full" << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	std::cout << "This type of materia : " << type << " was not found" << std::endl;
	return (0);
}
