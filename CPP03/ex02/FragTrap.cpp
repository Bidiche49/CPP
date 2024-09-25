/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:03:25 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 17:18:25 by ntardy           ###   ########.fr       */
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

void FragTrap::highFivesGuys() {
	std::cout << "Give me a high five!" << std::endl;
}

