/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:33:49 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/20 11:51:34 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << ": is dead !" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::changeName(std::string name) {
	this->_name = name;
}

Zombie* newZombie(std::string name)
{
	Zombie* newZ = new Zombie(name);
	return (newZ);
}

void randomChump(std::string name) {
	Zombie newZ = Zombie(name);
	newZ.announce();
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie* newHorde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		newHorde[i].changeName(name);
	}
	return (newHorde);
}
