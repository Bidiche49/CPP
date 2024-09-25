/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:19:11 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/22 15:01:00 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY__
#define __ROBOTOMY__

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : virtual public AForm {
	private:
		const std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator= (const RobotomyRequestForm& cpy);
		RobotomyRequestForm (const RobotomyRequestForm& cpy);

		virtual void execute(Bureaucrat& bureaucrat);
		void	drillingNoise();
};

#endif
