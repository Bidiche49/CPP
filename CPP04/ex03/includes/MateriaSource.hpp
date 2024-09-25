/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:34:12 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/12 18:46:39 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__
#define __MATERIASOURCE__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const & src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

		AMateria* materia[4];
};

#endif
