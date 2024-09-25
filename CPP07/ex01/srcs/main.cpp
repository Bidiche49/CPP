/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:57:21 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/23 17:32:47 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main() {
	int arrInt[] = {0, 1, 2, 3, 4};
	char arrChar[] = {'9', 'B', 'C', 'D', 'e', 'F', 'G', 'H'};
	char arrChar2[] = {};
	std::string arrStr[] = {"toto", "titi", "tata", "Turlututu", "Chapeau", "Pointu"};
	size_t len = 0;

	//INT ARRAY
	len = ARRAY_SIZE(arrInt);
	for(size_t i = 0; i < len; i++)
		std::cout << arrInt[i] << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;
	::iter(arrInt, len, increment<int>);
	for(size_t i = 0; i < len; i++)
		std::cout << arrInt[i] << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;

	//CHAR ARRAY
	len = ARRAY_SIZE(arrChar);
	for(size_t i = 0; i < len; i++)
		std::cout << static_cast<char>(arrChar[i]) << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;
	iter(arrChar, len, toLower);
	for(size_t i = 0; i < len; i++)
		std::cout << static_cast<char>(arrChar[i]) << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;

	len = ARRAY_SIZE(arrChar2);
	for(size_t i = 0; i < len; i++)
		std::cout << static_cast<char>(arrChar2[i]) << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;
	iter(arrChar2, len, toLower);
	for(size_t i = 0; i < len; i++)
		std::cout << static_cast<char>(arrChar2[i]) << ((i == len -1) ? "" : " | ");
	std::cout << std::endl;

	//STR ARRAY
	len = ARRAY_SIZE(arrStr);
	iter(arrStr, len, print);
	std::cout << std::endl;
}
