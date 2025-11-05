/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:25:38 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/24 16:00:35 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria* _materia[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource&	operator=(const MateriaSource& op);
		virtual ~MateriaSource();

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};
