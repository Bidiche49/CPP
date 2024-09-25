/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:32:58 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:32:41 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap"), ScavTrap("DiamondTrap"), _name("DiamondTrap") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name){
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap& cpy ) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destuctor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator= ( const DiamondTrap& cpy ) {
	if (this == &cpy)
		return *this;
	this->_name = cpy._name;
	this->ClapTrap::_name = cpy.ClapTrap::getName();
	this->_hit = cpy.FragTrap::_hit;
	this->_energy = cpy.ScavTrap::_energy;
	this->_attack = cpy.FragTrap::_attack;
	return *this;
}

/*-------------------------------------*/
/*---------------Getters---------------*/
/*-------------------------------------*/
std::string	DiamondTrap::getName() const {
	return _name;
}

int			DiamondTrap::getHit() const {
	return FragTrap::_hit;
}

int			DiamondTrap::getEnergy() const {
	return ScavTrap::_attack;
}

int			DiamondTrap::getAttack() const {
	return FragTrap::_attack;
}

/*-------------------------------------*/
/*--------------Functions--------------*/
/*-------------------------------------*/
void DiamondTrap::printDiamondTrap() {
	std::cout << "-- Info DiamondTrap --" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Name ClapTrap = " << ClapTrap::_name << std::endl;
	std::cout << "PV            = " << _hit << std::endl;
	std::cout << "Energy        = " << _energy << std::endl;
	std::cout << "Point attack  = " << _attack << std::endl;
	std::cout << "---------------------" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
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

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << ScavTrap::_attack << " points of damage!" << std::endl;
	_energy--;
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount << " damage ";
	if (_hit <= 0)
		std::cout << " but is already dead !";
	else
		_hit -= amount;
	std::cout << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount) {
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
