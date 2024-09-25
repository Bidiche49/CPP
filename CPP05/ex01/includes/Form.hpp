/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:15:29 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:27:48 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;
	bool				_isSigned;

public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExec);
	Form (const Form& cpy);
	Form& operator= ( const Form& cpy ); // TODO: FUNCTION
	~Form();


	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too low";
		}
	};
	std::string const &getName() const;
	int const &getSignGrade() const;
	int const &getExecGrade() const;
	bool const &getIsSigned() const;
	void beSigned(Bureaucrat& bureaucrat);
};
std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
