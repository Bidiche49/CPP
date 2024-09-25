/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:01 by ntardy            #+#    #+#             */
/*   Updated: 2023/11/06 17:49:34 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain *brain;

public:
	Cat();
	Cat (const Cat& cpy);
	Cat& operator=(const Cat& cpy);
	virtual ~Cat();

	Brain	&getBrain() const;
	virtual void	makeSound() const;
};

#endif
