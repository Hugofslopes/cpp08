/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:17:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/18 16:21:47 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

MutantStack::MutantStack(){
    std::cout << "Parametrized constructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack &other){
    std::cout << "Copy constructor called" << std::endl;
}

MutantStack& MutantStack::operator=(const MutantStack &other){
    std::cout << "Copy assignment constructor called" << std::endl;
}

MutantStack::~MutantStack(){
    std::cout << "Destructor called" << std::endl;
}

void    MutantStack::push(const &T value){
    if (_container.size() == _size)
        throw ContainerIsFull();
    else 
        _container.push_back(number);
}

int     MutantStack::top(){
    if (_container.size() != 0)
        return (_container.front());
    else
        throw ContainerIsEmpty(); 
}

void    MutantStack::pop(){
    if (_container.size() != 0)
        return (_container.pop_back());
    else
        throw ContainerIsEmpty(); 
}

void    MutantStack::emplace(){

}

void    MutantStack::empty(){

}

void    MutantStack::swap(){
    
}
