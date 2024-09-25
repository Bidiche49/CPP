/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:03:21 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/28 18:37:43 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__
#define __FRAGTRAP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
	int			_hit;
	int			_energy;
	int			_attack;

public:
	FragTrap();
	FragTrap(std::string _nameClapTrap);
	~FragTrap();
	FragTrap (const FragTrap& cpy);
	FragTrap& operator= (const FragTrap& cpy);


	std::string	getName() const;
	int			getHit() const;
	int			getEnergy() const;
	int			getAttack() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);
};

#endif
