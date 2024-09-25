/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:08 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:59:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal is born !" << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << _type << " is born !" << std::endl;
}

Animal::~Animal() {
	std::cout << type << " is dead !" << std::endl;
}

Animal::Animal ( const Animal& cpy ) {
	*this = cpy;
}

Animal& Animal::operator= ( const Animal& cpy ) {
	if (this == &cpy)
		return *this;
	this->type = cpy.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal have no sound" << std::endl;
}
