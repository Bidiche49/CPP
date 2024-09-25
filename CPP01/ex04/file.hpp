/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 04:04:12 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 04:44:25 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class File {
private:
	std::string _name;
	std::string _s1;
	std::string _s2;
	std::ifstream _ogFile;
	std::ofstream _replaceFile;

public:
	File(std::string name, std::string s1, std::string s2);
	~File();
	std::string getName();
	std::string getS1();
	std::string getS2();
	std::ifstream& getOgFile();
	std::ofstream& getReplaceFile();
};

#endif
