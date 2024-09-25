/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:40:12 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 03:06:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	void setType(std::string type);
	std::string getType();
};

#endif
