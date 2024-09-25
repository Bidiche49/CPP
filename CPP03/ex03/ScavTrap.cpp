/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:51:37 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:39:25 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string nameClapTrap) : ClapTrap(nameClapTrap) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap ( const ScavTrap& cpy ) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destuctor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy) {
	if (this == &cpy)
		return *this;

	this->_name = cpy._name;
	this->_hit = cpy._hit;
	this->_energy = cpy._energy;
	this->_attack = cpy._attack;

	return *this;
}

/*-------------------------------------*/
/*---------------Getters---------------*/
/*-------------------------------------*/
std::string	ScavTrap::getName() const {
	return _name;
}

int			ScavTrap::getHit() const {
	return _hit;
}

int			ScavTrap::getEnergy() const {
	return _energy;
}

int			ScavTrap::getAttack() const {
	return _attack;
}

/*-------------------------------------*/
/*--------------Functions--------------*/
/*-------------------------------------*/
void ScavTrap::attack(const std::string& target) {
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

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	_energy--;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount << " damage ";
	if (_hit <= 0)
		std::cout << " but is already dead !";
	else
		_hit -= amount;
	std::cout << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
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

void ScavTrap::guardGate() {

	if (this->_energy <= 0)
	{
		std::cout << "Can't be repaired because " << this->_name << " have no energy !" << std::endl;
		return ;
	}
	if (this->_hit <= 0)
	{
		std::cout << "Can't be repaired because " << this->_name <<  " is dead !" << std::endl;
		return ;
	}
	if (_isGateKeeper == true)
	{
		std::cout << "ScavTrap " << this->_name << " is already in gate keeper mode !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode !" << std::endl;
	_isGateKeeper = true;
	this->_energy--;
}

