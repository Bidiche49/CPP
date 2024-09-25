/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:31 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 16:54:59 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-------------------------------------*/
/*-------------Constructors------------*/
/*-------------------------------------*/
ClapTrap::ClapTrap() : _name("ClapTrap"), _hit(10), _energy(10), _attack(0) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0) {}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap ( const ClapTrap& cpy ) {
	*this = cpy;
}

/*-------------------------------------*/
/*---------------Getters---------------*/
/*-------------------------------------*/
std::string	ClapTrap::getName() const {
	return _name;
}

int			ClapTrap::getHit() const {
	return _hit;
}

int			ClapTrap::getEnergy() const {
	return _energy;
}

int			ClapTrap::getAttack() const {
	return _attack;
}

/*-------------------------------------*/
/*--------------Operators--------------*/
/*-------------------------------------*/
ClapTrap& ClapTrap::operator= ( const ClapTrap& cpy ) {
	if (this == &cpy)
		return *this;

	this->_name = cpy.getName();
	this->_hit = cpy.getHit();
	this->_energy = cpy.getEnergy();
	this->_attack = cpy.getAttack();

	return *this;
}

/*-------------------------------------*/
/*--------------Functions--------------*/
/*-------------------------------------*/
void	ClapTrap::attack(const std::string& target) {
	if (_energy <= 0)
	{
		std::cout << "Can't attack " << target << " because " << _name << " have no energy !" << std::endl;
		return ;
	}

	if (_hit <= 0)
	{
		std::cout << "Can't attack " << target << " because " << _name << " is dead !" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack << " points of damage!" << std::endl;
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount << " damage ";
	if (_hit <= 0)
		std::cout << " but is already dead !";
	else
		_hit -= amount;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy <= 0)
	{
		std::cout << "Can't be repaired because " << _name << " have no energy !" << std::endl;
		return ;
	}

	if (_hit <= 0)
	{
		std::cout << "Can't be repaired because " << _name <<  " is dead !" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << _name << " recovers " << amount << " life points !" << std::endl;
	_hit += amount;
	_energy--;
}

void ClapTrap::printClapTrap() {
	std::cout << "-- Info ClapTrap --" << std::endl;
	std::cout << "Name = " << _name << std::endl;
	std::cout << "PV = " << _hit << std::endl;
	std::cout << "Energy = " << _energy << std::endl;
	std::cout << "Point attack = " << _attack << std::endl;
	std::cout << "-------------------" << std::endl;
}
