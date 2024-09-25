/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:48:25 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 07:16:30 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
typedef void (Harl::*FunctionPtr)();
private:
	std::string lvls[4];
	FunctionPtr functs[4];
	void debug() {
		std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	}
	void info() {
		std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	}
	void warning() {
		std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}
	void error() {
		std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
	}

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
