/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:26:19 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:57:59 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is create" << std::endl;
}

Brain::Brain(const Brain *brain) {
	for (int i = 0; i < 100; i++)
		idea[i] = brain->idea[i];
	std::cout << "Brain is create" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain is destroy" << std::endl;
}

Brain::Brain ( const Brain& cpy ) {
	*this = cpy;
}

Brain& Brain::operator= ( const Brain& cpy ) {
	if (this == &cpy)
		return *this;
	for (int i = 0; i < 100; i++)
		this->idea[i] = cpy.idea[i];
	return *this;
}
