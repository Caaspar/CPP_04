/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:40:46 by cgerner           #+#    #+#             */
/*   Updated: 2025/07/28 14:38:13 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
    std::cout << "===== Learning Materias =====" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\n===== Creating Character =====" << std::endl;
    ICharacter* me = new Character("Jean");

    std::cout << "\n===== Creating Materias and Equipping =====" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "\n===== Creating Another Character =====" << std::endl;
    ICharacter* bob = new Character("Bob");

    std::cout << "\n===== Using Materias =====" << std::endl;
    me->use(0, *bob); // Ice
    me->use(1, *bob); // Cure

    std::cout << "\n===== Using Invalid Index =====" << std::endl;
    me->use(10, *bob);

    std::cout << "\n===== Trying to Learn More Than 4 Materia =====" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());

    std::cout << "\n===== Trying to Create Unknown Materia =====" << std::endl;
    tmp = src->createMateria("fire");
    me->equip(tmp);

    std::cout << "\n===== Unequipping Materia =====" << std::endl;

    // Tableau pour stocker les materias déséquipées (max 10)
    AMateria* droppedMaterias[10];
    int droppedCount = 0;

    Character* realMe = dynamic_cast<Character*>(me);
    if (realMe)
    {
        AMateria* dropped = realMe->getInventoryAt(1);
        realMe->unequip(1);
        if (dropped && droppedCount < 10)
        {
            droppedMaterias[droppedCount++] = dropped;
        }
    }
    else
        std::cerr << "Cast from ICharacter* to Character* failed" << std::endl;

    std::cout << "\n===== Deep Copy Test =====" << std::endl;
    Character copy = *(dynamic_cast<Character*>(me));
    copy.use(0, *bob); // devrait tirer Ice
    copy.equip(src->createMateria("cure"));
    copy.use(1, *bob); // devrait soigner Bob

    std::cout << "\n===== Cleaning Up =====" << std::endl;
    delete bob;
    delete me;
    delete src;
    // Supprime les materias déséquipées laissées au sol
    for (int i = 0; i < droppedCount; i++)
    {
        delete droppedMaterias[i];
    }

    return 0;
}
