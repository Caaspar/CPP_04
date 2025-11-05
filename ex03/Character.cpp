/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:18:46 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 17:34:12 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "Default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete (_inventory[i]);
	}
}

Character::Character(const Character& copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
	}
}

Character&	Character::operator=(const Character& op)
{
	if (this != &op) // eviter l'auto-affectation
    {
        _name = op._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (op._inventory[i])
                _inventory[i] = op._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::Character(const std::string &name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

std::string	const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot equip a null Materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << _name << " equipped with " << m->getType() << " in slot "  << i << std::endl;
			return ;
		}
	}
	std::cout << "The inventory is already full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << idx << " is not a valid value of the inventory" << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		_inventory[idx] = NULL;
		std::cout << _name << " unequipped materia from slot " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << idx << " is not a valid value of the inventory" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);	
}

AMateria* Character::getInventoryAt(int idx) const
{
    if (idx < 0 || idx > 3)
        return NULL;
    return _inventory[idx];
}
