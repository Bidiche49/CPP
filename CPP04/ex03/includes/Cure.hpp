/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:21:01 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/13 20:18:04 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__
#define __CURE__

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure const & src);
	~Cure();
	Cure	&operator=(const Cure & src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif
