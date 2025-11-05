/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:46:32 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/29 10:58:01 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define ANIMALS 4

void	array(void)
{
	Animal *tab[ANIMALS + 1];
	tab[ANIMALS] = NULL;

	std::cout << "Creating Dogs and Cats" << std::endl;
	for (int i = 0; i < (ANIMALS / 2); i++)
		tab[i] = new Cat();
	std::cout << std::endl;

	for (int i = ANIMALS / 2; i < ANIMALS; i++)
		tab[i] = new Dog();
	std::cout << std::endl;

	std::cout << "All of them making sounds" << std::endl;
	for (int i = 0; i < ANIMALS; i++)
		tab[i]->makeSound();
	std::cout << std::endl;

	std::cout << "Deleting all of them" << std::endl;
	for (int i = 0; i < ANIMALS; i++)
		delete tab[i];
}

void	printDog(void)
{
	Dog *first = new Dog();
	std::cout << std::endl;

	std::cout << "Setting and print idea" << std::endl;
	first->getBrain()->setIdea(0, "I just want to run");
	first->getBrain()->setIdea(1, "Let me alone");
	std::cout << "1. " << first->getBrain()->getIdea(0) << std::endl;
	std::cout << "2. " << first->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	Dog *second = new Dog(*first);
	std::cout << std::endl;
	delete first;
	std::cout << std::endl;

	std::cout << "Print idea of second after delete first" << std::endl;
	std::cout << "1. " << second->getBrain()->getIdea(0) << std::endl;
	std::cout << "2. " << second->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	delete second;
	std::cout << std::endl;
}

void	printCat(void)
{
	Cat *first = new Cat();
	std::cout << std::endl;

	std::cout << "Setting and print idea" << std::endl;
	first->getBrain()->setIdea(0, "I just want to run");
	first->getBrain()->setIdea(1, "Let me alone");
	std::cout << "1. " << first->getBrain()->getIdea(0) << std::endl;
	std::cout << "2. " << first->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	Cat *second = new Cat(*first);
	std::cout << std::endl;
	delete first;
	std::cout << std::endl;

	std::cout << "Print idea of second after delete first" << std::endl;
	std::cout << "1. " << second->getBrain()->getIdea(0) << std::endl;
	std::cout << "2. " << second->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	delete second;
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "--------------- ARRAY ---------------" << std::endl;
	std::cout << std::endl;
	array();
	std::cout << std::endl;
	std::cout << "--------------- DOG ---------------" << std::endl;
	std::cout << std::endl;
	printDog();
	std::cout << std::endl;
	std::cout << "--------------- CAT ---------------" << std::endl;
	std::cout << std::endl;
	printCat();

	return (0);
}