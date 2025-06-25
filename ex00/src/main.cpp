/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:41:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/25 19:46:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try{
        std::cout << "Size: " << vec.size() << std::endl;
		std::cout << easyfind(vec, 9) << std::endl;
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
    }
	std::cout << std::endl; 
    vec.pop_back();
    try{
        std::cout << "Size: " << vec.size() << std::endl;
        std::cout << easyfind(vec, 4) << std::endl;
		std::cout << easyfind(vec, 9) << std::endl;
    }
    catch (std::exception &e){
		std::cout << e.what() << std::endl;
    }

	std::vector<char> vector;
	vector.push_back('a');
	vector.push_back('b');
	vector.push_back('c');
	vector.push_back('d');
		try{
        std::cout << "Size: " << vector.size() << std::endl;
		std::cout << static_cast<char>(easyfind(vector, 'a')) << std::endl;
		std::cout << easyfind(vector, 'e') << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
    }
	return (0);
}
