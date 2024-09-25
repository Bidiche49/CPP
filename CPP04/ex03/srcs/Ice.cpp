/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:21:07 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:49:30 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice ( const Ice& cpy ) {
	*this = cpy;
}

Ice::~Ice() {

}

Ice& Ice::operator= ( const Ice& cpy ) {
	_type = cpy._type;

	return *this;
}

AMateria*	Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
