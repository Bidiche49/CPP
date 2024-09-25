/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:32:09 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 18:03:35 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base *generate(void){
	int random;

	srand(time(NULL));
	random = rand() % 3;

	if (!random) {
		std::cout << "New A" << std::endl;
		return (new A());
	}
	else if (random == 2) {
		std::cout << "New B" << std::endl;
		return (new B());
	}
	else {
		std::cout << "New C" << std::endl;
		return (new C());
	}
}

void identify(Base *base) {
	if (dynamic_cast<A*>(base))
		std::cout << "The real type is A." << std::endl;
	else if (dynamic_cast<B*>(base))
		std::cout << "The real type is B." << std::endl;
	else if (dynamic_cast<C*>(base))
		std::cout << "The real type is C." << std::endl;
}

void identify(Base &base) {
	try {
		base = dynamic_cast<A &>(base);
		std::cout << "The real type is A." << std::endl;
	}
	catch (const std::exception &e) {}

	try {
		base = dynamic_cast<B &>(base);
		std::cout << "The real type is B." << std::endl;
	}
	catch (const std::exception &e) {}

	try {
		base = dynamic_cast<C &>(base);
		std::cout << "The real type is C." << std::endl;
	}
	catch (const std::exception &e) {}
}

int main(void)
{
	Base *newBase = generate();
	identify(newBase);
	identify(*newBase);
	delete newBase;
	return 0;
}
