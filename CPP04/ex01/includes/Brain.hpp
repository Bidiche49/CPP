/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:26:16 by ntardy            #+#    #+#             */
/*   Updated: 2023/11/06 18:43:01 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
#define __BRAIN__

#include "iostream"

class Brain {
public:
	std::string idea[100];
	Brain( void );
	Brain(const Brain * brain);
	~Brain();
	Brain ( const Brain& cpy );
	Brain& operator= ( const Brain& cpy );
};

#endif
