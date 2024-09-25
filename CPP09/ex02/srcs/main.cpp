/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:22:08 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/25 00:47:12 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc > 1) {
		std::string tmp;
		for (int i = 1; i < argc; i++) {
			for (int j = i + 1; j < argc; j++) {
				if (atoi(argv[i]) == atoi(argv[j])) {
					std::cout << RED << "You cant put multiple times the same number." << RESET << std::endl;
					return (1);
				}
			}
			tmp += argv[i];
			tmp += ' ';
		}

		PmergeMe pmerg(tmp, argc - 1);
		try
		{
			pmerg.fillCont(tmp);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << '\n';
		}
	}
	else
		std::cout << RED << "Error: Need 1 or more arguments." << RESET << std::endl;
}
