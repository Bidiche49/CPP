/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:18:54 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/19 02:38:34 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
	PhoneBook phoneBook;
	std::string command;

	while (!(std::cin.eof()) && std::cout << "Chose a command (ADD, SEARCH, EXIT) : "
		&& std::getline(std::cin, command) && command != "EXIT") {
		if (command == "ADD") {
			if (!phoneBook.addContact())
				break ;
		} else if (command == "SEARCH") {
			if (phoneBook.displayContacts()) {
				while (!(std::cin.eof())) {
					if (phoneBook.searchContact() == true)
						break ;
				}
			}
		} else if (command.empty()) {
			std::cout << "Empty line. Retry." << std::endl;
		} else {
			std::cout << "Wrong command. Retry." << std::endl;
		}
	}
	if (std::cin.eof())
		std::cout << "EOF detected" << std::endl;
	else
		std::cout << "exit" << std::endl;
	return 0;
}
