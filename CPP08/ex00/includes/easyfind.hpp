/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:30:00 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/23 23:25:38 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
public:
	const char* what() const throw() {
		return "Element not found";
	}
};

template <typename T>
void easyfind(T cont, int nb) {
	typename T::iterator it = find(cont.begin(), cont.end(), nb);
	if (it != cont.end())
	{
		std::cout << "nb find : " << *it << std::endl;
		return ;
	} else {
		throw NotFoundException();
	}
}

#endif
