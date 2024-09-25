/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:33:49 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 03:50:46 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0){}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const & src) : _list(src._size), _size(src._size) {
	std::copy(src._list.begin(), src._list.end(), _list.begin());
}

Span::~Span() {}

Span& Span::operator=(Span const & src) {
	if (this != &src) {
		std::copy(src._list.begin(), src._list.end(), this->_list.begin());
		this->_size = src._size;
	}
	return (*this);
}

void Span::addNumber(int N) {
	if (this->_list.size() >= this->_size) {
		throw (TooManyObjectException());
	}
	else
		this->_list.push_back(N);
}

void Span::addTabNumber(int arr[], unsigned int size) {
	for (unsigned int i = 0; i < size; i++) {
		try {
			this->addNumber(arr[i]);
		} catch (std::exception const & ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}

unsigned int Span::shortestSpan(void)
{
	if (this->_list.size() < 2)
		throw (NotEnoughMemberException());
	this->_list.sort();
	unsigned int ret = UINT_MAX;
	std::list<int>::iterator i = this->_list.begin();
	std::list<int>::iterator save = i;
	i++;
	for (; i != this->_list.end(); ++i)
	{
		unsigned int dist = abs(*i - *save);
		if (ret > dist)
			ret = dist;
		save = i;
	}
	return (ret);
}

unsigned int Span::longestSpan(void) {
	if (this->_list.size() < 2)
		throw (NotEnoughMemberException());

	this->_list.sort();

	return (this->_list.back() - this->_list.front());
}
