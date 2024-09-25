/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:58:12 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 03:48:06 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

#include "easyfind.hpp"
#include <vector>

int main() {
	int arr[] = {10, 20, 30, 40};
	std::vector<int> vec(arr, arr + ARRAY_SIZE(arr));

	try
	{
		easyfind(vec, 41);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
