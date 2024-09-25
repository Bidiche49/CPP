/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:05 by ntardy            #+#    #+#             */
/*   Updated: 2023/11/06 18:34:10 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string type;
	std::string sound;

public:
	Animal();
	Animal(std::string _type, std::string _sound);
	virtual ~Animal();
	Animal ( const Animal& cpy );
	Animal& operator= ( const Animal& cpy );

	std::string		getType() const;
	std::string		getSound() const;
	virtual void	makeSound() const = 0;
};

#endif
