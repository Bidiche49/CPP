// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/30 11:15:21 by ntardy            #+#    #+#             */
// /*   Updated: 2024/01/30 18:02:43 by ntardy           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main()	{
	AForm					*Mouais;
	Intern					Fabrife;

	try
	{
		Mouais = Fabrife.makeForm("ShrubberyCreationForm", "toto");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Mouais = Fabrife.makeForm("RobotomyRequestForm", "titi");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Mouais = Fabrife.makeForm("PresidentialPardonForm", "tutu");
		std::cout << *Mouais << std::endl;
		delete Mouais;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Mouais = Fabrife.makeForm("Mouais", "tata");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
