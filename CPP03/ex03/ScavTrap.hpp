/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:51:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:37:40 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__
#define __SCAVTRAP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public	ClapTrap {
protected:
	int			_hit;
	int			_energy;
	int			_attack;
	bool		_isGateKeeper;

public:

	ScavTrap();
	ScavTrap(std::string nameClapTrap);
	~ScavTrap();
	ScavTrap ( const ScavTrap& cpy );
	ScavTrap& operator= ( const ScavTrap& cpy );

	std::string	getName() const;
	int			getHit() const;
	int			getEnergy() const;
	int			getAttack() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();
};

#endif
