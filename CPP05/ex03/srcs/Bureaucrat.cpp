/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:36:55 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:59:35 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Bureaucrat constructor is called" << std::endl;
	if (grade < 1) throw GradeTooHighException();
	if (grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() : _name("peon"), _grade(150) {
	std::cout << "Bureaucrat default constructor is called" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy.getName()), _grade(cpy.getGrade()) {
	std::cout << "Bureaucrat copy constructor is called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& cpy) {
	std::cout << "Bureaucrat operator = is called" << std::endl;
	if (this != &cpy) {
		_grade = cpy._grade;
		static_cast<std::string>(_name) = cpy._name;
	}
	return *this;
}

std::string const &Bureaucrat::getName() const {
	return _name;
}

int const &Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::upGrade() {
	std::cout << _name;
	std::cout << " get an upgrade" << std::endl;
	_grade < 2 ? throw GradeTooHighException() : _grade--;
}

void Bureaucrat::downGrade() {
	std::cout << _name;
	std::cout << " get a downgrade" << std::endl;
	_grade > 149 ? throw GradeTooLowException() : _grade++;
}

void Bureaucrat::signForm(AForm& form) {
	try
	{
		form.beSigned(*this);
		std::cout << _name;
		std::cout << " signed ";
		std::cout << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name;
		std::cout << " can't sign ";
		std::cout << form.getName();
		std::cout << ": ";
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm& form) {
	try
	{
		form.execute(*this);
		std::cout << _name;
		std::cout << " executed ";
		std::cout << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name;
		std::cout << " can't execute ";
		std::cout << form.getName();
		std::cout << ": ";
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat){
	std::cout << bureaucrat.getName();
	std::cout << ", bureaucrat grade ";
	std::cout << bureaucrat.getGrade();
	return(out);
}
