/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:50:09 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 15:01:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM__
#define __AFORM__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;
	bool				_isSigned;

public:
	AForm();
	AForm(const std::string name, int gradeToSign, int gradeToExec);
	AForm (const AForm& cpy);
	AForm& operator= ( const AForm& cpy );
	virtual ~AForm();


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

	class NotSignedException : public std::exception {
	public:
		const char* what() const throw() {
			return "Form not signed";
		}
	};

	std::string const &getName() const;
	int const &getSignGrade() const;
	int const &getExecGrade() const;
	bool const &getIsSigned() const;
	void beSigned(Bureaucrat& bureaucrat);
	void isExecutable(Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat& bureaucrat) = 0;
};
std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
