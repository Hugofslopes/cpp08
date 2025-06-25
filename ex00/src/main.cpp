/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:41:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/18 13:55:48 by hfilipe-         ###   ########.fr       */
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
    vec.pop_back();
    try{
        std::cout << "Size: " << vec.size() << std::endl;
        std::cout << easyfind(vec, 4) << std::endl;
		std::cout << easyfind(vec, 9) << std::endl;
    }
    catch (std::exception &e){
		std::cout << e.what() << std::endl;
    }
	return (0);
}
