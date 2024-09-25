/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:10:00 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/21 15:06:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter();

	ScalarConverter	&operator=(ScalarConverter const & src);
	static void		convert(const std::string& value);
};

#endif
