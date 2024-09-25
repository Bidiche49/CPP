/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:15:21 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 14:15:06 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
	Bureaucrat* Manu;
	try
	{
		Manu = new Bureaucrat("Manu", -1);
		std::cout << *Manu << std::endl;
		// delete Manu;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Manu = new Bureaucrat("Manu", 156);
		std::cout << *Manu << std::endl;
		delete Manu;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	Bureaucrat* Clem;
	try
	{
		Clem = new Bureaucrat("Clem", 147);
		std::cout << *Clem << std::endl;
		Clem->downGrade();
		std::cout << *Clem << std::endl;
		Clem->downGrade();
		std::cout << *Clem << std::endl;
		Clem->downGrade();
		std::cout << *Clem << std::endl;
		Clem->downGrade();
		std::cout << *Clem << std::endl;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete Clem;
	Bureaucrat* Alex;
	try
	{
		Alex = new Bureaucrat("Alex", 3);
		std::cout << *Alex << std::endl;
		Alex->upGrade();
		std::cout << *Alex << std::endl;
		Alex->upGrade();
		std::cout << *Alex << std::endl;
		Alex->upGrade();
		std::cout << *Alex << std::endl;
		Alex->upGrade();
		std::cout << *Alex << std::endl;
	}
	catch (std::exception const & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete Alex;

	Bureaucrat ALAN("Clem", 147);
	Bureaucrat ALAN2;

	ALAN2 = ALAN;

	std::cout << Alex << std::endl;
	return (0);
}

// int main() {

// 	std::cout << std::endl;
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

// 	// std::cout << std::endl;
// 	// std::cout << "-----------Operator =-----------" << std::endl;

// 	// try {
// 	// 	Bureaucrat tocopy("Ben", 23);
// 	// 	Bureaucrat copy("tocopy", 10);
// 	// 	std::cout << copy << std::endl;
// 	// 	copy = tocopy;
// 	// 	std::cout << copy << std::endl;
// 	// } catch (std::exception &e) {
// 	// 	std::cout << "Exception caught: " << e.what() << std::endl;
// 	// }
// 	// return 0;
// }

