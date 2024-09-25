/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 03:53:45 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 05:45:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "You must enter 3 args : <file_name> <s1> <s2>." << std::endl;
		return (1);
	}

	File file(argv[1], argv[2], argv[3]);

	if (!(file.getOgFile().is_open()) || !(file.getReplaceFile().is_open())) {
		std::cout << "Error file not open." << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(file.getOgFile(), line)) {
		size_t start;
		do {
			start = line.find(file.getS1());
			if (start == std::string::npos)
				break ;
			line.erase(start, file.getS1().length());
			line.insert(start, file.getS2());
		} while (start != std::string::npos);
		file.getReplaceFile() << line << '\n';
	}
	return (0);
}
