/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:38:28 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:27:41 by ntardy           ###   ########.fr       */
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
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);

	virtual void	attack(const std::string& target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);

	virtual std::string	getName() const;
	virtual int			getHit() const;
	virtual int			getEnergy() const;
	virtual int			getAttack() const;

	void	printClapTrap();
};

#endif
