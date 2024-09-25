/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:33:26 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/20 10:27:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie Bill("Bill");
	Bill.announce();
	Zombie* newZ = newZombie("Murphy");
	newZ->announce();
	randomChump("Grunt");
	delete newZ;
	return (0);
}
