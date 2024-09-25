/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:47:53 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:28:08 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__
#define __DIAMONDTRAP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap {
private:
	std::string	_name;
	using FragTrap::_hit;
	using ScavTrap::_energy;
	using FragTrap::_attack;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap (const DiamondTrap& cpy);
	DiamondTrap& operator= (const DiamondTrap& cpy);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printDiamondTrap();

	std::string	getName() const;
	int			getHit() const;
	int			getEnergy() const;
	int			getAttack() const;
};

#endif
