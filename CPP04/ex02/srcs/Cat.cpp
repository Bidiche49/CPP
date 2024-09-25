/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:59 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:58:36 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat", "Miaou"), brain(new Brain()) {
	std::cout << type << " learn to speak and think" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << type << " keep mum" << std::endl;
}

Cat::Cat ( const Cat& cpy ): Animal(cpy.getType(), cpy.getSound()), brain(new Brain()) {
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
		this->brain = new Brain(*cpy.brain);
	else
		this->brain = 0;
	this->type = cpy.type;
	this->sound = cpy.sound;
	return *this;
}

void Cat::makeSound() const{
	std::cout << getSound() << std::endl;
}

Brain	&Cat::getBrain() const	{
	return *brain;
}
