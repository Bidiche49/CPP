/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:15:29 by ntardy            #+#    #+#             */
/*   Updated: 2024/02/19 16:55:17 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
# define __BUREAUCRAT__

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat (const Bureaucrat& cpy);
	~Bureaucrat();
	Bureaucrat& operator= ( const Bureaucrat& cpy );


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
	int const &getGrade() const;
	void upGrade();
	void downGrade();
	void signForm(AForm& form);
	void executeForm(AForm& form);
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif

