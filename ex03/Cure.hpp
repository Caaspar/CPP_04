/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:08:32 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 11:57:23 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
	private:
		
	public:
		Cure();
		Cure(const Cure& copy);
		Cure&	operator=(const Cure& op);
		virtual ~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};
