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

// #include "includes/Bureaucrat.hpp"
// #include "includes/AForm.hpp"
// #include "includes/ShrubberyCreationForm.hpp"
// #include "includes/RobotomyRequestForm.hpp"
// #include "includes/PresidentialPardonForm.hpp"

// //TESTS BUREAUCRAT
// void test_bureaucrat(bool run)
// {
// 	if (run == false)
// 		return ;

// 	std::cout << "-----------START TESTS BUREAUCRAT-----------" << std::endl;
// 	std::cout << "-----------Constructor too high-----------" << std::endl;

// 	try {
// 		Bureaucrat high("Alex", 0);
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Upgrade too high-----------" << std::endl;

// 	try {
// 		Bureaucrat high("Alex", 1);
// 		high.upGrade();
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Constructor too low-----------" << std::endl;

// 	try {
// 		Bureaucrat low("Shan", 150);
// 		low.downGrade();
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Downgrade too low-----------" << std::endl;

// 	try {
// 		Bureaucrat low("Shan", 151);
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Normal case-----------" << std::endl;

// 	try {
// 		Bureaucrat normal("Aug", 75);
// 		std::cout << normal << std::endl;
// 		normal.upGrade();
// 		std::cout << normal << std::endl;
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Copy constructor-----------" << std::endl;

// 	try {
// 		Bureaucrat tocopy("Ben", 23);
// 		Bureaucrat copy(tocopy);
// 		std::cout << copy << std::endl;
// 		copy.upGrade();
// 		std::cout << copy << std::endl;
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}
// 	std::cout << "-----------END TESTS BUREAUCRAT-----------" << std::endl;
// 	std::cout << std::endl;
// }

// //TEST AFORM
// void	test_form(bool run)
// {
// 	if (run == false)
// 		return ;

// 	std::cout << "-----------START TESTS FORM-----------" << std::endl;
// 	std::cout << "-----------Constructor too high-----------" << std::endl;

// 	try {
// 		AForm form("form1", 0, 12);
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Constructor too low-----------" << std::endl;

// 	try {
// 		AForm form("form2", 13, 154);
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Copy constructor-----------" << std::endl;

// 	try {
// 		AForm tocopy("form4", 23, 15);
// 		AForm copy(tocopy);
// 		std::cout << copy << std::endl;
// 	} catch (std::exception &e) {
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "-----------Sign OK-----------" << std::endl;

// 	Bureaucrat alex("Alex", 75);
// 	AForm form3("form3", 80, 10);
// 	alex.signForm(form3);

// 	std::cout << std::endl;
// 	std::cout << "-----------Sign KO-----------" << std::endl;

// 	AForm form4("form4", 70, 10);
// 	alex.signForm(form4);

// 	std::cout << "-----------END TESTS FORM-----------" << std::endl;
// 	std::cout << std::endl;
// }

// //TEST AFORM
// void	test_customs_forms(bool run)
// {
// 	if (run == false)
// 		return ;

// 	std::cout << "-----------START TESTS CUSTOMS FORMS-----------" << std::endl;
// 	std::cout << "-----------Sign OK-----------" << std::endl;

// 	Bureaucrat alex("Alex", 75);
// 	AForm form1("form1", 80, 10);
// 	alex.signForm(form1);

// 	std::cout << std::endl;
// 	std::cout << "-----------Sign KO-----------" << std::endl;

// 	AForm form4("form4", 70, 10);
// 	alex.signForm(form4);

// 	std::cout << "-----------END TESTS CUSTOMS FORMS-----------" << std::endl;
// 	std::cout << std::endl;
// }

// int main()
// {
// 	test_bureaucrat(true);
// 	test_form(true);
// 	test_customs_forms(true);

// }



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:52:44 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/18 00:56:40 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main()	{
	Bureaucrat				President("President", 3);
	Bureaucrat				Alex("Alex", 10);
	Bureaucrat				Aug("Aug", 71);
	Bureaucrat				Shanley("Shanley", 139);
	Bureaucrat				Blutch("Blutch", 150);
	ShrubberyCreationForm	SCF1("Turlututu");
	ShrubberyCreationForm	SCF2("Turlututu");
	ShrubberyCreationForm	SCF3("Turlututu");
	RobotomyRequestForm		RRF1("Wobot");
	RobotomyRequestForm		RRF2("Wobot");
	RobotomyRequestForm		RRF3("Wobot");
	PresidentialPardonForm	PPF1("Arthur Dent");
	PresidentialPardonForm	PPF2("Arthur Dent");
	PresidentialPardonForm	PPF3("Arthur Dent");

	std::cout << " Testing ShrubberyCreationForm " << std::endl;
	std::cout << "\\_____________________________/" << std::endl;

	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		std::cout << SCF1 << std::endl;
		std::cout << Aug << std::endl;
		Aug.signForm(SCF1);
		Aug.executeForm(SCF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Shanley.signForm(SCF2);
		Shanley.executeForm(SCF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Blutch.signForm(SCF3);
		Blutch.executeForm(SCF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n Testing RobotomyCreationForm " << std::endl;
	std::cout << "\\______________________________/" << std::endl;

	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		President.signForm(RRF1);
		President.executeForm(RRF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Aug.signForm(RRF2);
		Aug.executeForm(RRF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Shanley.signForm(RRF3);
		Shanley.executeForm(RRF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n Testing PresidentialPardonForm " << std::endl;
	std::cout << "\\________________________________/" << std::endl;

	std::cout << "\nHigh rank :\n" << std::endl;
	try
	{
		President.signForm(PPF1);
		President.executeForm(PPF1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nMid rank :" << std::endl;
	try
	{
		Alex.signForm(PPF2);
		Alex.executeForm(PPF2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLow rank :" << std::endl;
	try
	{
		Aug.signForm(PPF3);
		Aug.executeForm(PPF3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}

