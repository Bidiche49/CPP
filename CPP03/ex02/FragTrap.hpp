/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:03:21 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/27 16:51:06 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__
#define __FRAGTRAP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string _nameClapTrap);
	~FragTrap();
	FragTrap (const FragTrap& cpy);
	FragTrap& operator= (const FragTrap& cpy);

	void highFivesGuys(void);
};

#endif
