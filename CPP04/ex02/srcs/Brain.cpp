/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:26:19 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:58:33 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is create" << std::endl;
}

Brain& Brain::operator=(const Brain& cpy) {
	std::cout << "Brain is copied by operator" << std::endl;
	if (this == &cpy)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = cpy.idea[i];
	}
	return *this;
}

Brain::Brain(const Brain& cpy) {
	std::cout << "Brain is copied by constructor" << std::endl;
	*this = cpy;
}

Brain::~Brain() {
	std::cout << "Brain is destroy" << std::endl;
}
