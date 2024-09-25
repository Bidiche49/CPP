/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:00:17 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/23 17:49:53 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T* _arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		~Array();

		Array &operator=(Array const & src);
		T& operator[](size_t index);

		unsigned int size() const;

};


template <typename T>
Array<T>::Array() : _arr(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()), _size(n) {}

template <typename T>
Array<T>::~Array() {delete [] _arr;}

template <typename T>
Array<T>::Array(const Array<T>& src) : _arr(new T[src.size()]), _size(src.size()) {
	for(size_t i = 0; i < this->size(); i++)
		_arr[i] = src._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const & cpy) {
	// if (this == cpy)
	// 	return (cpy);
	delete [] _arr;
	_size = cpy.size();
	_arr = new T[this->size()];
	for(size_t i = 0; i < this->size(); i++)
		_arr[i] = cpy._arr[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](size_t index) {
	if (index < 0 || index >= this->size())
		throw (std::out_of_range("Wrong index"));
	return (_arr[index]);
}

template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
};

#endif
