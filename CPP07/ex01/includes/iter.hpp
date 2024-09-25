/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:54:53 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 21:21:45 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t arrLenght, void (*func)(T&)) {
	for(size_t i = 0; i < arrLenght; i++)
		func(arr[i]);
}

template<typename T>
void increment(T& toUp) {
	++toUp;
}

template<typename T>
void toLower(T& toLow) {
	toLow = tolower(static_cast<int>(toLow));
}

template <typename T>
void print(T& toPrint) {
	std::cout << toPrint << std::endl;
}

#endif
