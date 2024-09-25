/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:48:40 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:44:24 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false) {
	std::cout << "AForm constructor is called" << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1) throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150) throw GradeTooLowException();
}

AForm::AForm() : _name("basic Aform"), _gradeToSign(150), _gradeToExec(150), _isSigned(false){
	std::cout << "AForm default constructor is called" << std::endl;
}


AForm::AForm(const AForm& cpy) : _name(cpy.getName()), _gradeToSign(cpy.getSignGrade()), _gradeToExec(cpy.getExecGrade()), _isSigned(cpy.getIsSigned()) {
	std::cout << "AForm copy constructor is called" << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm destructor is called" << std::endl;
}

AForm& AForm::operator= (const AForm& cpy) {
	std::cout << "AForm operator = is called" << std::endl;
	if (this != &cpy) {
		static_cast<std::string>(_name) = cpy._name;
		*(int*)&_gradeToSign = cpy._gradeToSign;
		*(int*)&_gradeToExec = cpy._gradeToExec;
		_isSigned = cpy._isSigned;
	}
	return *this;
}

std::string const &AForm::getName() const {
	return (_name);
}

int const &AForm::getSignGrade() const {
	return (_gradeToSign);
}

int const &AForm::getExecGrade() const {
	return (_gradeToExec);
}

bool const &AForm::getIsSigned() const {
	return (_isSigned);
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign) {

		_isSigned = true;
	}
	else
		throw GradeTooLowException();
}

void AForm::isExecutable(Bureaucrat& bureaucrat) {
	if (this->getIsSigned()) {
		if (bureaucrat.getGrade() <= this->getExecGrade())
			return ;
		else
			throw GradeTooLowException();
	}
	else
		throw NotSignedException();
}

std::ostream& operator<<(std::ostream &out, const AForm& form){
	std::cout << "AForm info:" << std::endl;
	std::cout << "Name: " + form.getName() << std::endl;
	std::cout << "Grade to sign it: ";
	std::cout << form.getSignGrade() << std::endl;
	std::cout << "Grade to execute it: ";
	std::cout << form.getExecGrade() << std::endl;
	std::cout << (form.getIsSigned() ? "Is signed" : "Is not signed") << std::endl;
	return(out);
}
