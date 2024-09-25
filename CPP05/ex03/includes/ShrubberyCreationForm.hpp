/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:07:13 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 15:01:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBERRY__
#define __SHRUBERRY__

#include "AForm.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : virtual public AForm {
	private:
		const std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _nameAForm);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& cpy);
		ShrubberyCreationForm (const ShrubberyCreationForm& cpy);

		virtual void execute(Bureaucrat& bureaucrat);
		void createShrubbery();
};

#endif
