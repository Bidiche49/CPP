/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:18:56 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/19 00:25:58 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	numContacts = 0;
}

bool PhoneBook::addContact() {
	if (numContacts > 7)
		numContacts = 0;
	contacts[numContacts].setInfo();
	numContacts++;
	return true;
}

bool PhoneBook::displayContacts() const {
	if (numContacts > 0) {
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|    Index| First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		for (int i = 0; i < 8 && !(contacts[i].getfirstname().empty()); ++i) {
			std::cout << "|";
			std::cout.width(10);
			std::cout << i;
			std::cout << "|";
			contacts[i].displayLine();
			std::cout << std::endl;
		}
		std::cout << "--------------------------------------------" << std::endl;
		return true;
	} else {
		std::cout << "PhoneBook is empty." << std::endl;
		return false;
	}
}

bool PhoneBook::searchContact() const {
	std::string index;
	std::cout << "Enter id's contact : ";
	getline(std::cin, index);

	if (std::cin.eof())
		return false;

	if (index.length() == 1 && index[0] - 48 >= 0 && index[0] - 48 < 8
		&& !(contacts[index[0] - 48].getfirstname().empty())) {
		contacts[index[0] - 48].displayInfo();
		return true;
	} else {
		std::cout << "Wrong index. Retry." << std::endl;
		return false;
	}
}
