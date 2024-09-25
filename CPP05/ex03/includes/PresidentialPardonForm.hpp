/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:49:23 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 15:01:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL__
#define __PRESIDENTIAL__

#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm {
	private:
		const std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator= (const PresidentialPardonForm& cpy);
		PresidentialPardonForm (const PresidentialPardonForm& cpy);

		virtual void execute(Bureaucrat& bureaucrat);
		void	presidentialPardon();
};

#endif
