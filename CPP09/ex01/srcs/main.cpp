/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:59:46 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/25 00:24:32 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string checkPolak(std::string const &polak)
{
	if (polak.size() < 5)
		return ("too few operators and numbers");
	if (polak.size() % 2 == 0)
		return ("pattern not respected");
	bool balance = true;
	for (size_t i = 0; i < polak.size(); i++)
	{
		if (balance == true)
		{
			balance = false;
			if (!isdigit(polak[i]) && polak[i] != '-' && polak[i] != '+' && polak[i] != '*'
					&& polak[i] != '/')
				return ("forbidden carac");
		}
		else
		{
			balance = true;
			if (polak[i] != ' ')
				return ("pattern not respected");
		}
	}
	return ("");
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << RED << "Error: you must enter 1 argument" << RESET << std::endl, 0);
	std::string polak = static_cast<std::string>(av[1]);
	std::string v_polak = checkPolak(polak);
	if (v_polak.compare(""))
		return (std::cout << RED << "Error: " << v_polak << RESET << std::endl, 0);
	RPN rpn(polak);
	rpn.polakCalc();
	return (0);
}
