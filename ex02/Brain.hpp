/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:03:12 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 15:57:14 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain&	operator=(const Brain& op);
		~Brain();

		void		setIdea(int i, const std::string& idea);
		std::string	getIdea(int i) const;
};
