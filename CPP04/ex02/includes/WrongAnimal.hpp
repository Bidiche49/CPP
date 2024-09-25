/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:46:07 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/29 14:46:08 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__
#define __WRONGANIMAL__

#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string _type);
	virtual ~WrongAnimal();
	WrongAnimal ( const WrongAnimal& cpy );
	WrongAnimal& operator= ( const WrongAnimal& cpy );

	std::string		getType() const;
	virtual void	makeSound() const;
};
#endif /* __WRONGANIMAL__ */
