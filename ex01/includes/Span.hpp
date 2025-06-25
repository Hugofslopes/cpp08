/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/25 19:55:58 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm> 

class Span {
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void addNumber(int Number);
		int shortestSpan();
		int longestSpan();
		template <typename InputIterator>
		void addRange(InputIterator begin, InputIterator end) {
			for(; begin != end; begin++) {
				if (_container.size() >= _size)
					throw ContainerIsFull();
				_container.push_back(*begin);
			}
		}

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
		std::vector<int>	_container;
		unsigned int		_size;
} ;
#endif
