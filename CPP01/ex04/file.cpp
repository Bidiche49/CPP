/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 04:07:49 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 04:44:59 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

File::File(std::string name, std::string s1, std::string s2) : _name(name), _s1(s1), _s2(s2), _ogFile(name.c_str()), _replaceFile((name + ".replace").c_str()) {}

File::~File() {
	_ogFile.close();
	_replaceFile.close();
}

std::string File::getName() {
	return (_name);
}
std::string File::getS1() {
	return (_s1);
}

std::string File::getS2() {
	return (_s2);
}

std::ifstream& File::getOgFile() {
	return (_ogFile);
}

std::ofstream& File::getReplaceFile() {
	return (_replaceFile);
}
