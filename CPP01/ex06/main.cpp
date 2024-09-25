/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 05:48:27 by ntardy            #+#    #+#             */
/*   Updated: 2023/10/24 07:29:25 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc != 2) {
		std::cout << "1 arg is require !" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return 0;
}
