/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:01 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 22:25:53 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"

class Cat : public Animal{
private:
	std::string sound;

public:
	Cat();
	~Cat();
	Cat ( const Cat& cpy );
	Cat& operator= ( const Cat& cpy );

	std::string	getSound() const;
	void		makeSound() const;
};

#endif
