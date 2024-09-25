/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:51:33 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 17:06:52 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__
#define __SCAVTRAP__

#include "ClapTrap.hpp"

class ScavTrap : public	ClapTrap
{
private:
	bool _isGateKeeper;

public:

	ScavTrap();
	ScavTrap(std::string nameClapTrap);
	~ScavTrap();
	ScavTrap ( const ScavTrap& cpy );
	ScavTrap& operator= ( const ScavTrap& cpy );

	void	guardGate();
};

#endif
