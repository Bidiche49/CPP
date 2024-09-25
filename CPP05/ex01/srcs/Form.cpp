/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:58:53 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:43:55 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSigned(false) {
	std::cout << "Form constructor is called" << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1) throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150) throw GradeTooLowException();
}

Form::Form() : _name("basic form"), _gradeToSign(150), _gradeToExec(150), _isSigned(false){
	std::cout << "Form default constructor is called" << std::endl;
}


Form::Form(const Form& cpy) : _name(cpy.getName()), _gradeToSign(cpy.getSignGrade()), _gradeToExec(cpy.getExecGrade()), _isSigned(cpy.getIsSigned()) {
	std::cout << "Form copy constructor is called" << std::endl;
}

Form& Form::operator= (const Form& cpy) {
	std::cout << "Form operator = is called" << std::endl;
	if (this != &cpy) {
		static_cast<std::string>(_name) = cpy._name;
		*(int*)&_gradeToSign = cpy._gradeToSign;
		*(int*)&_gradeToExec = cpy._gradeToExec;
		_isSigned = cpy._isSigned;
	}
	return *this;
}

Form::~Form() {
	std::cout << "Form destructor is called" << std::endl;
}

std::string const &Form::getName() const {
	return (_name);
}

int const &Form::getSignGrade() const {
	return (_gradeToSign);
}

int const &Form::getExecGrade() const {
	return (_gradeToExec);
}

bool const &Form::getIsSigned() const {
	return (_isSigned);
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const Form& form){
	std::cout << "Form info:" << std::endl;
	std::cout << "Name: " + form.getName() << std::endl;
	std::cout << "Grade to sign it: ";
	std::cout << form.getSignGrade() << std::endl;
	std::cout << "Grade to execute it: ";
	std::cout << form.getExecGrade() << std::endl;
	std::cout << (form.getIsSigned() ? "Is signed" : "Is not signed") << std::endl;
	return(out);
}
