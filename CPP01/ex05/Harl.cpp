/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:48:23 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 07:31:39 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	lvls[0] = "DEBUG";
	lvls[1] = "INFO";
	lvls[2] = "WARNING";
	lvls[3] = "ERROR";

	functs[0] = &Harl::debug;
	functs[1] = &Harl::info;
	functs[2] = &Harl::warning;
	functs[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
		{
			(this->*functs[i])();
			return ;
		}
	}
	std::cout << "no function with \"";
	std::cout << level;
	std::cout << "\"" << std::endl;
}
