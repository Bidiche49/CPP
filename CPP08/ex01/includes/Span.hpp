/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:33:22 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 03:50:59 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

#include <iostream>
#include <list>
#include <algorithm>
#include <climits>

class Span {
private:
	std::list<int> _list;
	unsigned int _size;
public:
	Span();
	Span(unsigned int N);
	Span(Span const & src);
	Span &operator=(Span const & src);
	~Span();

	class TooManyObjectException : public std::exception
	{
		const char* what() const throw(){
			return ("List have too many items in it");
		}
	};
	class NotEnoughMemberException : public std::exception
	{
		const char* what() const throw(){
			return ("List haven't enough items in it");
		}
	};

	void			addNumber(int N);
	void			addTabNumber(int arr[], unsigned int size);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif
