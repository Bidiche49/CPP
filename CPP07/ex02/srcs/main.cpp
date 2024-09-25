/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:00:14 by ntardy            #+#    #+#             */
/*   Updated: 2024/03/23 17:52:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//
// 	return 0;
// }

void	printArr(Array<int> arr) {
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main()
{
	Array<int> numbers(5);

	srand(time(NULL));
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = rand();

	std::cout << "size Numbers = " << numbers.size() << std::endl;

	std::cout << "Numbers:" << std::endl;
	printArr(numbers);

	std::cout << "Copy constructor :" << std::endl;
	Array<int> copy(numbers);

	std::cout << "Numbers:" << std::endl;
	printArr(numbers);
	std::cout << "Numbers copy:" << std::endl;
	printArr(copy);

	std::cout << "Numbers copy[0] += 42:" << std::endl;
	copy[0] += 42;
	std::cout << "Numbers[last element] -= 42:" << std::endl;
	numbers[numbers.size()-1] -= 42;

	std::cout << "Numbers:" << std::endl;
	printArr(numbers);
	std::cout << "Numbers copy:" << std::endl;
	printArr(copy);



	std::cout << std::endl;
	std::cout << "Numbers copy = Numbers" << std::endl;
	copy = numbers;

	std::cout << "Numbers:" << std::endl;
	printArr(numbers);
	std::cout << "Numbers copy:" << std::endl;
	printArr(copy);

	std::cout << "Numbers copy[0] += 42:" << std::endl;
	copy[0] += 42;
	std::cout << "Numbers[last element] -= 42:" << std::endl;
	numbers[numbers.size()-1] -= 42;

	std::cout << "Numbers:" << std::endl;
	printArr(numbers);
	std::cout << "Numbers copy:" << std::endl;
	printArr(copy);

	return (0);
}
