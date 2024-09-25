/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:18:50 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/19 02:16:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::getfirstname() const
{
	return (firstName);
}

void Contact::setfirstname(std::string firstname)
{
	firstName = firstname;
}
void Contact::setlastname(std::string lastname)
{
	lastName = lastname;
}
void Contact::setnickname(std::string nickName)
{
	nickname = nickName;
}
void Contact::setnumber(std::string number)
{
	phoneNumber = number;
}
void Contact::setsecret(std::string secret)
{
	darkestSecret = secret;
}

bool Contact::readInfo(std::string prompt, std::string &info)
{
	while (!std::cin.eof() && std::cout << prompt) {
		std::string temp;
		std::getline(std::cin, temp);
		size_t start = temp.find_first_not_of(" \t");
		if (start != std::string::npos) {
			info = temp.substr(start);
			return (true);
		} else if (!std::cin.eof()) {
			std::cout << "Empty line." << std::endl;
		}
	}
	return (false);
}

bool Contact::setInfo() {
	return (
		readInfo("First Name   : ", firstName)
		&& readInfo("Last Name    : ", lastName)
		&& readInfo("Nickname     : ", nickname)
		&& readInfo("Phone Number : ", phoneNumber)
		&& readInfo("Secret       : ", darkestSecret)
	);
}

void Contact::displayLine() const {
	std::cout.width(10);
	std::cout << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName);
	std::cout << "|";
	std::cout.width(10);
	std::cout << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName);
	std::cout << "|";
	std::cout.width(10);
	std::cout << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname);
	std::cout << "|";
}

void Contact::displayInfo() const {
	std::cout.width(10);
	std::cout << ("Firstname   : " + firstName) << std::endl;
	std::cout << ("Lastname    : " + lastName) << std::endl;
	std::cout << ("Nickname    : " + nickname) << std::endl;
	std::cout << ("PhoneNumber : " + phoneNumber) << std::endl;
	std::cout << ("Secret      : " + darkestSecret) << std::endl;
}


