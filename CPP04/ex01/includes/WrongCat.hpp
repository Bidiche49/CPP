/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:44:27 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/29 14:50:33 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT__
#define __WRONGCAT__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
	std::string sound;

public:
	WrongCat();
	~WrongCat();
	WrongCat ( const WrongCat& cpy );
	WrongCat& operator= ( const WrongCat& cpy );

	std::string	getSound() const;
	void		makeSound() const;
};

#endif /* __WRONGCAT__ */
