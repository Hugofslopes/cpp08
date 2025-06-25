/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:17:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/25 21:52:39 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {
			std::cout << "Default constructor called" << std::endl;
		}

		MutantStack(const MutantStack& other) : std::stack<T>(other) {
			std::cout << "Copy constructor called" << std::endl;
		}

		MutantStack& operator=(const MutantStack& other) {
			if (this != &other) {
				std::stack<T>::operator=(other);
			}
			std::cout << "Assignment operator called" << std::endl;
			return *this;
		}

		~MutantStack() {
			std::cout << "Destructor called" << std::endl;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() 
		{ 
			return (this->c.begin()); 
		}
		
		iterator end() { 
			return (this->c.end()); 
		}
};
#endif
