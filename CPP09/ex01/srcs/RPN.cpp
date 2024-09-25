/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:57:52 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/25 00:21:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	return;
}

RPN::RPN(std::string const &line) : _polak(line)
{
	return;
}
RPN::RPN(const RPN &cop)
{
	this->_polak = cop._polak;
	*this = cop;
}
RPN &RPN::operator=(const RPN &eg)
{
	if (this != &eg)
	{
		this->_polak = eg._polak;
	}
	return (*this);
}
RPN::~RPN(void)
{
	return;
}
void RPN::polakCalc(void)
{
	for(size_t i = 0; i < this->_polak.size(); i++)
	{
		if (i % 2 == 0)
		{
			if (isdigit(this->_polak[i]))
				this->_stack.push(_polak[i] - '0');
			else
			{
				if (this->_stack.size() < 2)
				{
					std::cout << RED << "Error : too many operator" << RESET << std::endl;
					return;
				}
				double val2 = this->_stack.top();
				this->_stack.pop();
				double val1 = this->_stack.top();
				this->_stack.pop();
				if (this->_polak[i] == '+')
				{
					this->_stack.push(val1 + val2);
				}
				else if (this->_polak[i] == '-')
				{
					this->_stack.push(val1 - val2);
				}
				else if (this->_polak[i] == '*')
				{
					this->_stack.push(val1 * val2);
					// std::cout << val1 << " et " << val2 << std::endl;
				}
				else if (this->_polak[i] == '/')
				{
					if (val2 == 0)
					{
						std::cout << RED << "Error : attempt to divide by zero" << RESET << std::endl;
						return;
					}
					this->_stack.push(val1 / val2);
				}
			}
		}
	}
	if (this->_stack.size() != 1)
		std::cout << RED << "Error : too many value" << RESET << std::endl;
	else
		std::cout << BLUE << this->_stack.top() << RESET << std::endl;
}
