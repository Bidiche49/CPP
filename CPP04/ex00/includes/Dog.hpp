/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:00:54 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 22:25:48 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"

class Dog : public Animal{
private:
	std::string sound;

public:
	Dog();
	~Dog();
	Dog ( const Dog& cpy );
	Dog& operator= ( const Dog& cpy );

	std::string	getSound() const;
	void		makeSound() const;
};

#endif
