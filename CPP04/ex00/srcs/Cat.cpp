/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:59 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:59:21 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat"), sound("Miaou") {
	std::cout << type << " learn to speak" << std::endl;
}

Cat::~Cat() {
	std::cout << type << " keep mum" << std::endl;
}

Cat::Cat ( const Cat& cpy ) {
	*this = cpy;
}

Cat& Cat::operator= ( const Cat& cpy ) {
	if (this == &cpy)
		return *this;
	this->type = cpy.type;
	this->sound = cpy.sound;
	return *this;
}

void Cat::makeSound() const{
	std::cout << this->getSound() << std::endl;
}

std::string Cat::getSound() const {
	return sound;
}
