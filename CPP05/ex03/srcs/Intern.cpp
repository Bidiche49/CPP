/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:11:52 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/20 00:17:53 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

typedef AForm   *(Intern::*pf)(std::string const & target);

Intern::Intern()    {

}

Intern::Intern(Intern const & src)  {
	if (this != &src)
		*this = src;
}

Intern::~Intern()   {

}

Intern  &Intern::operator=(Intern const & src)  {
	(void)src;
	return (*this);
}

AForm   *Intern::makeShrub(std::string const & target)    {
	return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeRobot(std::string const & target)    {
	return (new RobotomyRequestForm(target));
}

AForm   *Intern::makePresi(std::string const & target)    {
	return (new PresidentialPardonForm(target));
}

AForm   *Intern::makeForm(std::string const & name, std::string const & target) {
	std::string nameTab[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	pf          func[] = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePresi};

	for (int i = 0; i < 3; i++) {
		if (name == nameTab[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*func[i])(target));
		}
	}
	throw WrongName();
	return (NULL);
}
