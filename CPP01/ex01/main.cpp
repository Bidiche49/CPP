/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:33:26 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/20 11:47:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* Horde = zombieHorde(4, "Grunt");
	for (int i = 0; i < 4; i++){
		Horde[i].announce();
	}
	delete[] Horde;
	return (0);
}
