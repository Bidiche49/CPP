/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:10:44 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:49:10 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type("default")	{

}

AMateria::AMateria(std::string const & type) : _type(type)	{

}

AMateria::AMateria(AMateria const & src)	{
	if (this != &src)
		*this = src;
}

AMateria::~AMateria()	{

}

AMateria	&AMateria::operator=(const AMateria & src)	{
	_type = src._type;

	return (*this);
}

std::string const & AMateria::getType() const	{
	return _type;
}

void	AMateria::use(ICharacter& target)	{
	(void)target;
}

