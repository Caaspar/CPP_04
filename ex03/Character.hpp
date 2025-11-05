/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:17:27 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 17:34:04 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: virtual public ICharacter
{
	private:
		AMateria* _inventory[4];
		std::string _name;
	public:
		Character();
		Character(const Character& copy);
		Character&	operator=(const Character& op);
		virtual ~Character();

		Character(const std::string &name);

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		AMateria* getInventoryAt(int idx) const;
};
