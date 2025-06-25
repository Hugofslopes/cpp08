/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/18 14:03:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <cctype>
# include <vector>
# include <algorithm> 

class NotOnTheContainer : public std::exception
{
	public:
		virtual const char *what() const throw(){
			return ("The value could not be found on the container");
		}
};

template <typename T> 
int easyfind(T& container, int nb) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), nb);
	if (it != container.end()) 	
		return *it;
	return (throw NotOnTheContainer(), -1);
}
#endif