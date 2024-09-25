/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 19:10:34 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap robot("robot");
	robot.beRepaired(30);
	robot.takeDamage(3);
	ScavTrap test("test");
	robot.attack("test");
	test.takeDamage(robot.getAttack());
	test.printClapTrap();
	test.printClapTrap();
	test = robot;
	test.printClapTrap();
	test.guardGate();
	test.guardGate();
	test.guardGate();
	test.printClapTrap();
	return (0);
}
