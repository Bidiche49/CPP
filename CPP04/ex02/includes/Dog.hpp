/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:54 by ntardy            #+#    #+#             */
/*   Updated: 2023/11/06 18:24:12 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog& cpy);
	Dog& operator=(const Dog& cpy);
	virtual ~Dog();

	Brain	&getBrain() const;
	virtual void	makeSound() const;
};

#endif
