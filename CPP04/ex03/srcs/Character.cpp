/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:24:38 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:49:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

Character::Character(std::string name) : _name(name){

	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->ravine[i] = NULL;
}

Character::Character(const Character& cpy) {
	_name = cpy.getName();

	for (int i = 0; i < 4; i++) {
		inventory[i] = cpy.inventory[i] ? cpy.inventory[i]->clone() : NULL;
	}

	for (int i = 0; i < 100; i++) {
		ravine[i] = cpy.ravine[i] ? cpy.ravine[i]->clone() : NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < 100; i++)
	{
		if (ravine[i])
			delete ravine[i];
	}
}

Character& Character::operator= (const Character& cpy) {
	if (this != &cpy) {
		_name = cpy._name;

		for (int i = 0; i < 4; ++i) {
			if (inventory[i])
				delete inventory[i];
			inventory[i] = cpy.inventory[i] ? cpy.inventory[i]->clone() : NULL;
		}

		for (int i = 0; i < 100; ++i) {
			if (ravine[i])
				delete ravine[i];
			ravine[i] = cpy.ravine[i] ? cpy.ravine[i]->clone() : NULL;

		}
	}
	return *this;
}

void Character::displayInventoryRavine() {
	std::cout << "---------------" << std::endl;
	std::cout << getName() + " Inventory:" << std::endl;
	for (int i = 0; i < 4; ++i)
		std::cout << "Slot "
		<< i
		<< ": "
		<< (inventory[i] ? inventory[i]->getType() : "Empty")
		<< std::endl;

	std::cout << "---------------" << std::endl;
	std::cout << getName() + " Ravine:" << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << "Slot "
		<< i
		<< ": "
		<< (ravine[i] ? ravine[i]->getType() : "Empty")
		<< std::endl;

	std::cout << std::endl << std::endl << std::endl;
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	if (!m)
		return ;
	for (int idx = 0; idx < 4; idx++)
	{
		if (!this->inventory[idx])
		{
			this->inventory[idx] = m;
			return ;
		}
	}
	for (int idx = 0; idx < 100; idx++)
	{
		if (!ravine[idx])
		{
			ravine[idx] = m;
			return ;
		}
	}
	std::cout << "Error, " + m->getType() + " deleted" << std::endl;
	m->~AMateria();
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
	{
		for (int i = 0; i < 100; i++)
		{
			if (!ravine[i])
			{
				ravine[i] = this->inventory[idx];
				this->inventory[idx] = NULL;
				return ;
			}
		}
		std::cout << "Impossible to unequip " + this->inventory[idx]->getType() + ", encumber ravine" << std::endl;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}
