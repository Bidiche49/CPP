/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:08:14 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/24 19:07:05 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CSV_PATH "./data.csv"

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "Error: you must enter 1 argument (path file)" << std::endl;
		return (1);
	}

	try {
		BitcoinExchange btc(CSV_PATH);
		btc.traitement(argv[1]);
	} catch (std::exception const & ex) {
		std::cout << ex.what() << std::endl;
	}
	(void)argv;
	return (0);
}
