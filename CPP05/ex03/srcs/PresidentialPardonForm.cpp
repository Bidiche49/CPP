/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:50:32 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:49:03 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Robotomy", 25, 5), _target("target") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm& cpy ) : AForm(cpy.getName(), 25, 5) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destuctor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& cpy) {
	std::cout << "PresidentialPardonForm operator = is called" << std::endl;
	if (this != &cpy)
		static_cast<std::string>(_target) = cpy._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat& bureaucrat) {
	this->isExecutable(bureaucrat);
	this->presidentialPardon();
}

void	PresidentialPardonForm::presidentialPardon() {
	std::cout << _target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
