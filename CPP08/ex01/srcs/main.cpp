/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 03:08:25 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 03:52:27 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	int numbers[] = {10, 25, 5, 30, 15, 20, 8, 12, 33, 3};
	Span sp = Span(ARRAY_SIZE(numbers));
	sp.addTabNumber(numbers, ARRAY_SIZE(numbers));
	// try {
	// 	sp.addNumber(8);
	// } catch (std::exception const & ex) {
	// 	std::cout << ex.what() << std::endl;
	// }
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception const & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception const & ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
