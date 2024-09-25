/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:48:25 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 07:55:02 by ntardy           ###   ########.fr       */
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
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
