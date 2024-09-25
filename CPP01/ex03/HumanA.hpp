/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:49:03 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 03:22:56 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	std::string _name;
	Weapon* _weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
	void setWeapon(Weapon& weapon);
};

#endif
