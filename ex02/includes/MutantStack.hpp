/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:17:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/18 16:21:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>

class MutantStack {
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        ~MutantStack();

        void    push(const &T value);
        int     top();
        void    pop();
        void    emplace();
        void    empty();
        void    swap();
        

		class ContainerIsFull : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return ("The container is full");
				}
		};

		class ContainerIsEmpty : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return ("The container is empty");
				}
		};

		class ContainerHasOneELement : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return ("The container has only one element");
				}
		};
    private:
        std::vector<T> 	_container;
        unsigned long       _size;
}   ;
#endif