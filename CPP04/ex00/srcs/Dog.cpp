/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:56 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:59:19 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog"), sound("Ouaf Ouaf") {
	std::cout << type << " learn to speak" << std::endl;
}

Dog::~Dog() {
	std::cout << type << " keep mum" << std::endl;
}

Dog::Dog ( const Dog& cpy ) {
	*this = cpy;
}

Dog& Dog::operator= ( const Dog& cpy ) {
	if (this == &cpy)
		return *this;
	this->type = cpy.type;
	this->sound = cpy.sound;
	return *this;
}

void Dog::makeSound() const{
	std::cout << this->getSound() << std::endl;
}

std::string Dog::getSound() const {
	return sound;
}
