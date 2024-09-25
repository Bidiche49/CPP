/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:49:05 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 03:24:03 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}
