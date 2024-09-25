/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:24:42 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/13 21:07:48 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
#define __CHARACTER__

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter {
private:
	std::string	_name;
	AMateria	*inventory[4];
	AMateria	*ravine[100];

public:
	Character();
	Character(std::string name);
	Character (const Character& cpy);
	~Character();
	Character& operator= ( const Character& cpy );


	virtual void equip(AMateria *m);
	std::string const &getName() const;
	void displayInventoryRavine();
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
