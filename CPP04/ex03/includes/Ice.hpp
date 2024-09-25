/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:21:09 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/13 20:18:12 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__
#define __ICE__

#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const & src);
	~Ice();
	Ice	&operator=(const Ice & src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
