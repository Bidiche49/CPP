/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:05:36 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 16:37:27 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(4.5f);
	std::cout << c << std::endl;
	c = c * 2;
	std::cout << c << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// int main( void ) {
// int a = 3;
// int b = 2;
// std::cout << "a > b " << (a > b) << std::endl;
// Fixed a1(3);
// Fixed b1(2);
// std::cout << "a1 >= b1 " << ( a1 >= b1 ) << std::endl;
// std::cout << "a1 > b1 " << ( a1 > b1 ) << std::endl;
// // b1 = a1;
// std::cout << "a1 == b1 " << ( a1 == b1 ) << std::endl;
// std::cout << "a1 <= b1 " << ( a1 <= b1 ) << std::endl;
// std::cout << "a1 < b1 " << ( a1 < b1 ) << std::endl;
// std::cout << "a1+ b1 " << a1 + b1 << std::endl;
// std::cout << "a1+ b1 " << a1 - b1 << std::endl;
// std::cout << "a1+ b1 " << a1 * b1 << std::endl;
// std::cout << "a1+ b1 " << a1 / b1 << std::endl;
// return 0;
// }
