/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:15:21 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:25:07 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//TESTS BUREAUCRAT
void test_bureaucrat(bool run)
{
	if (run == false)
		return ;

	std::cout << "-----------START TESTS BUREAUCRAT-----------" << std::endl;
	std::cout << "-----------Constructor too high-----------" << std::endl;

	try {
		Bureaucrat high("Alex", 0);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Upgrade too high-----------" << std::endl;

	try {
		Bureaucrat high("Alex", 1);
		high.upGrade();
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Constructor too low-----------" << std::endl;

	try {
		Bureaucrat low("Shan", 150);
		low.downGrade();
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Downgrade too low-----------" << std::endl;

	try {
		Bureaucrat low("Shan", 151);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Normal case-----------" << std::endl;

	try {
		Bureaucrat normal("Aug", 75);
		std::cout << normal << std::endl;
		normal.upGrade();
		std::cout << normal << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Copy constructor-----------" << std::endl;

	try {
		Bureaucrat tocopy("Ben", 23);
		Bureaucrat copy(tocopy);
		std::cout << copy << std::endl;
		copy.upGrade();
		std::cout << copy << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "-----------END TESTS BUREAUCRAT-----------" << std::endl;
	std::cout << std::endl;
}

//TEST FORM
void	test_form(bool run)
{
	if (run == false)
		return ;

	std::cout << "-----------START TESTS FORM-----------" << std::endl;
	std::cout << "-----------Constructor too high-----------" << std::endl;

	try {
		Form form("form1", 0, 12);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Constructor too low-----------" << std::endl;

	try {
		Form form("form2", 13, 154);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Copy constructor-----------" << std::endl;

	try {
		Form tocopy("form4", 23, 15);
		Form copy(tocopy);
		std::cout << copy << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----------Sign OK-----------" << std::endl;

	Bureaucrat alex("Alex", 75);
	Form form3("form3", 80, 10);
	alex.signForm(form3);
	// std::cout << form3 << std::endl;

	std::cout << std::endl;
	std::cout << "-----------Sign KO-----------" << std::endl;

	Form form4("form4", 70, 10);
	alex.signForm(form4);
	// std::cout << form4 << std::endl;

	std::cout << "-----------END TESTS FORM-----------" << std::endl;
	std::cout << std::endl;
}

int main()
{
	test_bureaucrat(true);
	test_form(true);

}


