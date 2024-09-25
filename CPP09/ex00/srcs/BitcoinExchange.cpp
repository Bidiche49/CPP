/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:07:50 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 22:10:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	return;
}

BitcoinExchange::BitcoinExchange(std::string const &file)
{
	loadData(file);
	return;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &cop)
{
	this->_map = cop._map;
	*this = cop;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &eg)
{
	if (this != &eg)
	{
		this->_map = eg._map;
	}
	return (*this);
}
BitcoinExchange::~BitcoinExchange(void)
{
	return;
}

void BitcoinExchange::loadData(std::string const &file)
{
	std::ifstream open_data;
	open_data.open(file.c_str());
	if (open_data.is_open() == false)
		throw (CSVProblemException());
	std::string line;
	if (open_data.peek() == EOF)
		throw (CSVProblemException());
	while (std::getline(open_data, line))
	{
		size_t virg =  line.find(',');
		if (virg != std::string::npos && virg != 0 && line[virg + 1] != '\0')
		{
			this->_map[line.substr(0, virg)] = std::strtof(line.substr(virg + 1).c_str(), NULL);
		}
		else
		{
			open_data.close();
			throw (CSVProblemException());
		}
	}
	open_data.close();
}


void BitcoinExchange::traitement(std::string const &filePath)
{
	std::ifstream fileBuf;
	std::string line;

	fileBuf.open(filePath.c_str());
	if (!fileBuf.is_open())
		throw (UserFileProblemException());
	if (fileBuf.peek() == EOF)
		throw (UserFileProblemException());

	std::getline(fileBuf, line);
	if(line.compare("date | value"))
	{
		fileBuf.close();
		throw (UserFileProblemException());
	}
	while(std::getline(fileBuf, line))
	{
		size_t pipe = line.find('|');
		if (pipe != std::string::npos && pipe == 11 && line[pipe - 1] == ' '
				&& (pipe + 2) < line.size() && line[pipe + 1] == ' ')
		{
			std::string date = line.substr(0, pipe - 1);
			bool v_date = BitcoinExchange::checkDate(date);
			if (!v_date)
				std::cout << RED << "Error: bad input => " << date << RESET << std::endl;
			else
			{
				std::string val = line.substr(pipe + 2);
				bool v_val = BitcoinExchange::checkVal(val);
				if (v_val == true)
				{
					float ret = BitcoinExchange::calcBtc(date, val);
					if (ret != -1)
						std::cout << GREEN << date << " => " << val << " = " << ret << RESET << std::endl;
				}
			}
		}
		else
		{
			std::cout << RED << "Error: bad input => " << line << RESET << std::endl;
		}
	}

}
bool BitcoinExchange::checkDate(std::string const date)
{
	if (date.size() != 10)
		return (false);
	for (size_t i = 0; i < date.size(); i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return (false);
		}
		else if (isdigit(date[i]) == 0)
			return (false);
	}
	int year = atoi(date.substr(0,4).c_str());
	int month = atoi(date.substr(5, 7).c_str());
	int day = atoi(date.substr(8).c_str());
	if (year < 2000 || year > 2025)
	return (false);
	if (month == 0 || day == 0)
		return (false);
	if (month > 12)
		return (false);
	if (month == 2 && day > 29)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (day > 31)
		return (false);
	return (true);
}
bool BitcoinExchange::checkVal(std::string const val)
{
	if (val.size() > 20)
	{
		std::cout << RED << "Error: too large a number. (range 0-1000)" << RESET << std::endl;
		return (false);
	}
	if (val[0] == '.' || (isdigit(val[0]) == 0 && val[1] == '.'))
	{
		std::cout << RED << "Error: bad input => " << val << RESET << std::endl;
		return (false);
	}
	bool point = false;

	for (size_t i = 1; i < val.size(); i++)
	{
		if (val[i] == '.')
		{
			if (point == false)
				point = true;
			else
			{
				std::cout << RED << "Error: bad input => " << val << RESET << std::endl;
				return (false);
			}
		}
		else if (isdigit(val[i]) == 0)
		{
			std::cout << RED << "Error: bad input => " << val << RESET << std::endl;
			return (false);
		}
	}
	if (val[0] == '-')
	{
		std::cout << RED << "Error: not a positive number." << RESET << std::endl;
		return(false);
	}
	else if (isdigit(val[0]) == 0 && val[0] != '+')
	{
			std::cout << RED << "Error: bad input => " << val << RESET << std::endl;
			return (false);
	}
	double value = strtod(val.c_str(), NULL);
	if (value < 0 || value > 1000)
	{
		std::cout << RED << "Error: too large a number." << RESET << std::endl;
		return (false);
	}
	return (true);


}

float  BitcoinExchange::calcBtc(std::string const date, std::string const val)
{
	std::map<std::string, float>::const_iterator it_save;
	if (this->_map.begin()->first > date)
		return (std::cout << RED << "La date est trop vieille par rapport au set de donnee desole" << RESET << std::endl, -1);
	for (std::map<std::string, float>::const_iterator it = this->_map.begin(); it != this->_map.end(); ++it)
	{
		if (it->first == date)
			return (strtof(val.c_str(), NULL) * it->second);
		if (it->first > date)
			return (strtof(val.c_str(), NULL) * it_save->second);
		it_save = it;
	}
	return (strtof(val.c_str(), NULL) * it_save->second);
}
void BitcoinExchange::print(void)
{
	int i = 0;
	for (std::map<std::string, float>::const_iterator it = this->_map.begin(); it != this->_map.end(); ++it)
	{
		std::cout << it->first << " = " << it->second << ";\t" ;
		if ((i % 4) == 3)
			std::cout << std::endl;
		i++;
	}

	std::cout << '\n';
}
