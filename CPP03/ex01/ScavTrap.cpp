/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:51:37 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 19:55:10 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_isGateKeeper = false;
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	this->_hit;
}

ScavTrap::ScavTrap(std::string _nameClapTrap) : ClapTrap(_nameClapTrap) {
	std::cout << "ScavTrap constructor called" << std::endl;
	_isGateKeeper = false;
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
}

ScavTrap::ScavTrap (const ScavTrap& cpy) : ClapTrap(cpy.getName()) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destuctor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& cpy ) {
	if (this == &cpy)
		return *this;

	this->setName(cpy.getName());
	this->setHit(cpy.getHit());
	this->setEnergy(cpy.getEnergy());
	this->setAttack(cpy.getAttack());

	return *this;
}

void ScavTrap::guardGate() {

	if (this->getEnergy() <= 0)
	{
		std::cout << "Can't be repaired because " << this->getName() << " have no energy !" << std::endl;
		return ;
	}
	if (this->getHit() <= 0)
	{
		std::cout << "Can't be repaired because " << this->getName() <<  " is dead !" << std::endl;
		return ;
	}
	if (_isGateKeeper == true)
	{
		std::cout << "ScavTrap " << this->getName() << " is already in gate keeper mode !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode !" << std::endl;
	_isGateKeeper = true;
	this->setEnergy(this->getEnergy() - 1);
}

