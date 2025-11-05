/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:46:32 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/22 12:50:21 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Constructors ===" << std::endl;
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::cout << "\n=== Sounds ===" << std::endl;
	std::cout << "Dog sound: ";
	dog->makeSound();
	std::cout << "Cat sound: ";
	cat->makeSound();
	std::cout << "Animal sound: ";
	meta->makeSound();

	std::cout << "\n=== Wrong Animal Test ===" << std::endl;
	WrongAnimal* w_meta = new WrongAnimal();
	WrongAnimal* w_cat = new WrongCat();

	std::cout << "WrongAnimal sound: ";
	w_meta->makeSound();
	std::cout << "WrongCat sound: ";
	w_cat->makeSound();

	std::cout << "\n=== Destructors ===" << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete w_meta;
	delete w_cat;

	return (0);
}