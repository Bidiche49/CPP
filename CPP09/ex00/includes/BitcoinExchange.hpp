/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:08:06 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 17:45:02 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <map>
#include <iostream>
#include <fstream>
#include <exception>
#include <cctype>
#include <string>

#define BLUE		"\033[1;34m"
#define RED			"\033[1;31m"
#define GREEN		"\033[32m"
#define RESET		"\033[0m"

class BitcoinExchange
{
	public :
		BitcoinExchange(void);
		BitcoinExchange(std::string const &file);
		BitcoinExchange(const BitcoinExchange &cop);
		BitcoinExchange &operator=(const BitcoinExchange &eg);
		virtual ~BitcoinExchange(void);

		void print(void);
		void traitement(std::string const &file);
		bool checkDate(std::string const date);
		void loadData(std::string const &file);
		bool checkVal(std::string const val);
		float calcBtc(std::string const date, std::string const val);

		class CSVProblemException : public std::exception
		{
			const char* what() const throw(){
				return ("Problem with CSV configuration");
			}
		};
		class UserFileProblemException : public std::exception
		{
			const char* what() const throw(){
				return ("Problem with user file");
			}
		};
	private :
		std::map<std::string, float> _map;
};

#endif
