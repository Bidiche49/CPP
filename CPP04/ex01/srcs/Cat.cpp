/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:59 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:58:02 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat"), sound("Miaou") {
	brain = new Brain();
	std::cout << type << " learn to speak and think" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << type << " keep mum" << std::endl;
}

Cat::Cat ( const Cat& cpy ): Animal(cpy.getType()), brain(new Brain()) {
	std::cout << type << " has been copied by constructor" << std::endl;
	*this = cpy;
}

Cat& Cat::operator= ( const Cat& cpy ) {
	std::cout << type << " has been copied by operator" << std::endl;
	if (this == &cpy)
		return *this;
	if (this->brain)
		delete this->brain;
	if (cpy.brain)
		this->brain = new Brain(cpy.brain);
	else
		this->brain = 0;
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

Brain	&Cat::getBrain() const	{
	return *brain;
}
