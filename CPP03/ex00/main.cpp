/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 16:54:52 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap player("player");
	ClapTrap ennemy("ennemy");
	player.printClapTrap();
	ennemy.printClapTrap();
	player.attack(ennemy.getName());
	ennemy.takeDamage(player.getAttack());
	player.beRepaired(3);
	player.printClapTrap();
	ennemy.printClapTrap();
	return (0);
}
