/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:12:51 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/14 16:50:13 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < 4; i++) {
		materia[i] = NULL;
	}

	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (materia[i])
			delete materia[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const & src) {
	for(int i = 0; i < 4; i++) {
		materia[i] = src.materia[i];
	}

	return (*this);
}

void MateriaSource::learnMateria(AMateria* src) {
	for (int i = 0; i < 4; i++) {
		if (!materia[i])    {
			materia[i] = src->clone();
			break;
		}
	}
	delete src;
}

AMateria    *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (materia[i] && materia[i]->getType() == type)    {
			return (materia[i]->clone());
		}
	}

	return NULL;
}
