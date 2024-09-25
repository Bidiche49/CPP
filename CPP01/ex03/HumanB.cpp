/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:49:00 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 08:42:14 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout << _name;
	if(_weapon)
	{
		std::cout << " attacks with their ";
		std::cout << _weapon->getType() << std::endl;
	}
	else
		std::cout << " have no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

