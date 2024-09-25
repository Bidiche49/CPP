/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:56 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:58:04 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog"), sound("Ouaf Ouaf") {
	brain = new Brain();
	std::cout << type << " learn to speak and think" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << type << " keep mum" << std::endl;
}

Dog::Dog ( const Dog& cpy ): Animal(cpy.getType()), brain(new Brain()) {
	std::cout << type << " has been copied by constructor" << std::endl;
	*this = cpy;
}

Dog& Dog::operator= ( const Dog& cpy ) {
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

void Dog::makeSound() const{
	std::cout << this->getSound() << std::endl;
}

std::string Dog::getSound() const {
	return sound;
}

Brain	&Dog::getBrain() const	{
	return *brain;
}
