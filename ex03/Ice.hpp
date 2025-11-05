/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:08:18 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 11:59:36 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : virtual public AMateria
{
	private:
		
	public:
		Ice();
		Ice(const Ice& copy);
		Ice&	operator=(const Ice& op);
		virtual ~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};
