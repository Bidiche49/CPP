/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 19:38:11 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap robot("robot");
	robot.beRepaired(30);
	robot.takeDamage(3);
	FragTrap test("test");
	ScavTrap player("player");
	player.printClapTrap();
	robot.attack("test");
	test.takeDamage(robot.getAttack());
	test.printClapTrap();
	test = robot;
	test.printClapTrap();
	test.highFivesGuys();
	return (0);
}
