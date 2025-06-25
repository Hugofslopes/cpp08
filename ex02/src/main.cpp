/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:57:52 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/25 22:04:25 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		std::cout << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top:" << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size:" << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::list<int> mlist;

		std::cout << std::endl;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "Top: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "Size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << std::endl;

		while (it != ite) {
			std::cout  << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	{
		MutantStack<int> emptyStack;
		std::cout << "Size: " << emptyStack.size() << std::endl;
	}
	std::cout << std::endl;
	{
		MutantStack<int> mstack;
		std::cout << std::endl;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);
		MutantStack<int> copyStack(mstack);
		std::cout << std::endl;

		MutantStack<int> assignedStack;
		std::cout << std::endl;

		assignedStack = mstack;             
		std::cout << std::endl;
		
		copyStack.push(100);
		assignedStack.push(200);

		std::cout << "Original top: " << mstack.top() << std::endl;
		std::cout << "Copy top: " << copyStack.top() << std::endl;
		std::cout << "Assigned top: " << assignedStack.top() << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
