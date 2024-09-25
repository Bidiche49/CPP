/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:55:50 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/25 00:47:57 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <stack>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <exception>

#define BLUE		"\033[1;34m"
#define RED			"\033[1;31m"
#define RESET		"\033[0m"

class RPN
{
	public :
		RPN(void);
		RPN(std::string const &line);
		RPN(const RPN &cop);
		RPN &operator=(const RPN &eg);
		virtual ~RPN(void);

		void polakCalc(void);
	private :
		std::stack<double> _stack;
		std::string _polak;
};

#endif
