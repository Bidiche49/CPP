/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:24:26 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:48:27 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), _target("target") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm& cpy ) : AForm(cpy.getName(), 72, 45) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destuctor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& cpy) {
	std::cout << "RobotomyRequestForm operator = is called" << std::endl;
	if (this != &cpy)
		static_cast<std::string>(_target) = cpy._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat& bureaucrat) {
	this->isExecutable(bureaucrat);
	this->drillingNoise();
}

void RobotomyRequestForm::drillingNoise() {
	std::cout << "BRBRBBRRRBBRRRRRRRR" << std::endl;
	srand(time(NULL));
	int num = rand() % 2 + 1;
	num == 1
		? std::cout << _target + " has been robotomized" << std::endl
		: std::cout << "Robotomized has failed" << std::endl;
}

