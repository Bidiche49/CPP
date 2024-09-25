/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:51:37 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 18:13:43 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_isGateKeeper = false;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string _nameClapTrap) : ClapTrap(_nameClapTrap) {
	std::cout << "ScavTrap constructor called" << std::endl;
	_isGateKeeper = false;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap (const ScavTrap& cpy) : ClapTrap(cpy._name) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destuctor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& cpy ) {
	if (this == &cpy)
		return *this;

	this->_name = cpy._name;
	this->_hit = cpy._hit;
	this->_energy = cpy._energy;
	this->_attack = cpy._attack;

	return *this;
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

