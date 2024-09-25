/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:15:29 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:15:21 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <iostream>

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat (const Bureaucrat& cpy);
	Bureaucrat& operator= ( const Bureaucrat& cpy );
	~Bureaucrat();

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
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
