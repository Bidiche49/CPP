/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:12:07 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:48:48 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry", 145, 137), _target("target") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shruberry", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm& cpy ) : AForm(cpy.getName(), 145, 137) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destuctor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& cpy) {
	std::cout << "ShrubberyCreationForm operator = is called" << std::endl;
	if (this != &cpy)
		static_cast<std::string>(_target) = cpy._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat& bureaucrat) {
	this->isExecutable(bureaucrat);
	this->createShrubbery();
}

void ShrubberyCreationForm::createShrubbery() {
	std::string filename = _target + "_shrubbery";

	std::ofstream file(filename.c_str());

	if (file.is_open()) {
		file << "  ccee88oo\n";
		file << " C8O8O8Q8PoOb o8oo\n";
		file << "dOB69QO8PdUOpugoO9bD\n";
		file << "CgggbU8OU qOp qOdoUOdcb\n";
		file << "    6OuU  /p u gcoUodpP\n";
		file << "      \\\\\\//  /douUP\n";
		file << "        \\\\////\n";
		file << "         |||/\\\n";
		file << "         |||\\/\n";
		file << "         |||||\n";
		file << "   .....//||||\\....\n";

		file.close();

		std::cout << "Shrubbery created in file: " << filename << std::endl;
	} else {
		std::cout << "Error opening file: " << filename << std::endl;
	}
}
