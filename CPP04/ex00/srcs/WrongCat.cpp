/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:46:12 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:59:06 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"), sound("NEJNFJERF") {
	std::cout << type << " learn to speak" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << type << " keep mum" << std::endl;
}

WrongCat::WrongCat ( const WrongCat& cpy ) {
	*this = cpy;
}

WrongCat& WrongCat::operator= ( const WrongCat& cpy ) {
	if (this == &cpy)
		return *this;
	this->type = cpy.type;
	this->sound = cpy.sound;
	return *this;
}

std::string WrongCat::getSound() const {
	return sound;
}

void WrongCat::makeSound() const{
	std::cout << this->getSound() << std::endl;
}
