/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:58:00 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/23 11:35:28 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& copy);
		Cat&	operator=(const Cat& op);
		virtual ~Cat();

		void	makeSound() const;
		Brain	*getBrain();
};

