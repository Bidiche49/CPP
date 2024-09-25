/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:21:03 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:49:26 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure ( const Cure& cpy ) {
	*this = cpy;
}

Cure& Cure::operator= ( const Cure& cpy ) {
	_type = cpy._type;

	return *this;
}

AMateria*	Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
