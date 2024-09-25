/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:46:35 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	FragTrap frag("frag");
	ScavTrap scav("scav");
	frag.attack(scav.getName());
	scav.takeDamage(frag.getAttack());
	scav.attack(frag.getName());
	frag.takeDamage(scav.getAttack());
	std::cout << frag.getName() << " have now " << frag.getHit() << " life point" << std::endl;
	std::cout << scav.getName() << " have now " << scav.getHit() << " life point" << std::endl;
	DiamondTrap robot("robot");
	DiamondTrap test("test");
	robot.attack(test.getName());
	robot.printDiamondTrap();
	test.takeDamage(robot.getAttack());
	test.printDiamondTrap();
	test = robot;
	test.printDiamondTrap();
	test.highFivesGuys();
	return (0);
}
