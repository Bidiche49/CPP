/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:48:23 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 07:55:11 by ntardy           ###   ########.fr       */
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

void Harl::debug() {
	std::cout << "[DEBUG]" << std::endl;
	std::cout <<  "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< " I really do !" << std::endl;
}

void Harl::info() {
	std::cout << "[INFO]" << std::endl;
	std::cout <<  "I cannot believe adding extra bacon costs more money."
	<< " You didn’t put enough bacon in my burger ! "
	<< "If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning() {
	std::cout << "[WARNING]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free."
	<< " I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[ERROR]" << std::endl;
	std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
		{
			while (i < 4)
			{
				(this->*functs[i++])();
				std::cout << std::endl;
			}
			return ;
		}
	}
	std::cout << "no function with \"";
	std::cout << level;
	std::cout << "\"" << std::endl;
}
