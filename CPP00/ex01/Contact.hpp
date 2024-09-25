/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 01:08:32 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/19 02:17:40 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	~Contact();
	bool setInfo();
	void setfirstname(std::string firstname);
	void setlastname(std::string lastname);
	void setnickname(std::string nickname);
	void setnumber(std::string number);
	void setsecret(std::string secret);
	void displayLine() const;
	void displayInfo() const;
	std::string getfirstname() const;
	bool readInfo(std::string prompt, std::string &info);
};

#endif
