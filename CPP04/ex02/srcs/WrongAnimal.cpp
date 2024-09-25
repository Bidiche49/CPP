/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:46:04 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:58:47 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal is born !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << _type << " is born !" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " is dead !" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal& cpy ) {
	*this = cpy;
}

WrongAnimal& WrongAnimal::operator= ( const WrongAnimal& cpy ) {
	if (this == &cpy)
		return *this;
	this->type = cpy.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal have no sound" << std::endl;
}
