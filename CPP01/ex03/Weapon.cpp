/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:43:30 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 03:06:39 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon() {}

Weapon::~Weapon() {

}

void Weapon::setType(std::string type) {
	_type = type;
}

std::string Weapon::getType() {
	return (_type);
}
