/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:05 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 22:25:55 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(std::string _type);
	virtual ~Animal();
	Animal ( const Animal& cpy );
	Animal& operator= ( const Animal& cpy );

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif
