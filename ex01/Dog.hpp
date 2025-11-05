/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:57:50 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 15:29:34 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog&	operator=(const Dog& op);
		virtual ~Dog();

		void	makeSound();
		Brain	*getBrain();
};
