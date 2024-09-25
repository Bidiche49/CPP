/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:01 by ntardy            #+#    #+#             */
/*   Updated: 2023/11/06 18:41:33 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	std::string sound;
	Brain *brain;

public:
	Cat();
	~Cat();
	Cat ( const Cat& cpy );
	Cat& operator= ( const Cat& cpy );

	std::string	getSound() const;
	Brain		&getBrain() const;
	void		makeSound() const;
};

#endif
