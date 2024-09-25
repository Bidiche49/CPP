/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:08:02 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:49:39 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"

// void displayInventoryRavine(AMateria inventory[4], AMateria ravine[100]) {
// 	std::cout << "Inventory:" << std::endl;
// 	for (int i = 0; i < 4; ++i) {
// 		if (inventory[i]) {
// 			std::cout << "Slot " << i << ": " << inventory[i]->getType() << std::endl;
// 		} else {
// 			std::cout << "Slot " << i << ": Empty" << std::endl;
// 		}
// 	}

// 	std::cout << "Ravine:" << std::endl;
// 	for (int i = 0; i < 100; ++i) {
// 		if (ravine[i]) {
// 			std::cout << "Slot " << i << ": " << ravine[i]->getType() << std::endl;
// 		} else {
// 			std::cout << "Slot " << i << ": Empty" << std::endl;
// 		}
// 	}
// }

// int main()
// {
// 	Character Player1("Player1");
// 	Character Player2("Player2");
// 	AMateria *tmp;

// 	// Player1.displayInventoryRavine();
// 	tmp = new Ice();
// 	Player1.equip(tmp);
// 	tmp = new Cure();
// 	Player1.equip(tmp);
// 	tmp = new Ice();
// 	Player1.equip(tmp);
// 	tmp = new Cure();
// 	Player1.equip(tmp);
// 	tmp = new Cure();
// 	Player1.equip(tmp);
// 	Player1.displayInventoryRavine();

// 	std::cout << std::endl;

// 	Player1.unequip(0);
// 	Player1.displayInventoryRavine();

// 	ICharacter *bob = new Character("bob");
// 	Player1.use(2, *bob);
// 	Player1.use(3, Player1);

// 	// ne doit rien faire
// 	// Player1.displayInventoryRavine();
// 	Player1.use(5, *bob);
// 	Player1.use(0, *bob);
// 	// Player1.displayInventoryRavine();

// 	tmp = new Cure();
// 	Player2.displayInventoryRavine();
// 	Player2.equip(tmp);
// 	Player2.displayInventoryRavine();
// 	Player2 = Player1;
// 	Player1.displayInventoryRavine();
// 	Player2.displayInventoryRavine();
// 	Player2.unequip(0);
// 	Player2.unequip(2);
// 	Player2.use(2, Player1);
// 	Player2.use(3, Player1);
// 	Player2.displayInventoryRavine();
// 	delete bob;
// 	return (0);
// }



// int main()
// {
// 	// CONSTRUCTOR
// 	std::cout << "Constructor:" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	Character* me = new Character("me");
// 	std::cout << std::endl;

// 	// CREATE MATERIA
// 	std::cout << "CreateMateria:" << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	me->displayInventoryRavine();
// 	tmp = src->createMateria("nonexistent"); //fail creating material
// 	me->equip(tmp); // equip NULL
// 	me->displayInventoryRavine();
// 	std::cout << std::endl;

// 	// USE
// 	std::cout << "USE:" << std::endl;
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->use(2, *bob); // nothing equiped on slot 2
// 	me->use(-1, *bob);
// 	me->use(5, *bob);
// 	std::cout << std::endl;

// 	//DEEP COPY
// 	std::cout << "DEEP COPY" << std::endl;
// 	Character *me_copy = new Character(*me);
// 	std::cout << std::endl;

// 	// UNEQUIP
// 	std::cout << "UNEQUIP:" << std::endl;
// 	me->unequip(-1);
// 	me->unequip(5);
// 	tmp = new Ice();
// 	std::cout << "- use before unequip:" << std::endl;
// 	me->use(1, *bob); //test on bob
// 	me->unequip(1); // unequip valid slot
// 	std::cout << "- use after unequip:" << std::endl;
// 	me->use(1, *bob); //test on bob
// 	std::cout << std::endl;

// 	//COMPARE ME AND ME_COPY
// 	std::cout << "COMPARE ME AND ME_COPY" << std::endl;
// 	std::cout << "- me:" << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << "- me_copy:" << std::endl;
// 	me_copy->use(0, *bob);
// 	me_copy->use(1, *bob);
// 	std::cout << std::endl;

// 	//DESTRUCTOR
// 	delete bob;
// 	delete me;
// 	delete me_copy;
// 	delete src;
// 	delete tmp;

// 	return 0;
// }


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
