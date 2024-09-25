/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:09:05 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:28:07 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern    {

    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern  &operator=(Intern const & src);

        AForm   *makeForm(std::string const & name, std::string const & target);

        AForm   *makeShrub(std::string const & target);
        AForm   *makeRobot(std::string const & target);
        AForm   *makePresi(std::string const & target);

        class WrongName : public std::exception	{
			public:
			virtual const char* what() const throw(){
				return ("Wrong form name, mission aborted.");
			}
		};
};

#endif
