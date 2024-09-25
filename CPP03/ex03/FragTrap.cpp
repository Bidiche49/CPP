/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:03:25 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:40:25 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string nameClapTrap) : ClapTrap(nameClapTrap) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap ( const FragTrap& cpy ) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destuctor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cpy) {
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
std::string	FragTrap::getName() const {
	return _name;
}

int			FragTrap::getHit() const {
	return _hit;
}

int			FragTrap::getEnergy() const {
	return _energy;
}

int			FragTrap::getAttack() const {
	return _attack;
}

/*-------------------------------------*/
/*--------------Functions--------------*/
/*-------------------------------------*/
void FragTrap::attack(const std::string& target) {
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

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount << " damage ";
	if (_hit <= 0)
		std::cout << " but is already dead !";
	else
		_hit -= amount;
	std::cout << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
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

void FragTrap::highFivesGuys() {
	std::cout << "Give me a high five!" << std::endl;
}

