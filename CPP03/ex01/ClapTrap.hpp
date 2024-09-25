/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:28 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 19:54:54 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	int			_hit;
	int			_energy;
	int			_attack;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);

	std::string	getName() const;
	int			getHit() const;
	int			getEnergy() const;
	int			getAttack() const;

	void	setName(std::string name);
	void	setHit(int hit);
	void	setEnergy(int energy);
	void	setAttack(int attack);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	printClapTrap();
};



#endif
