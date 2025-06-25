/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:07:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/18 15:06:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(int N){
    std::cout << "Parametrized constructor called" << std::endl;
    _container.reserve(N);
    _size = N;
}

Span::Span(const Span &other){
    std::cout << "Copy constructor called" << std::endl;
    _container = other._container;
    _size = other._size;
}

Span & Span::operator=(const Span &other){
    std::cout << "Copy assignment constructor called" << std::endl;
    if (this != &other)
    {  
        _container = other._container;
        _size = other._size;
    }
    return (*this);
}

Span::~Span(){
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int Number){
    if (_container.size() == _size)
        throw ContainerIsFull();
    else 
        _container.push_back(Number);
}

int Span::shortestSpan(){
    int minDiff;
    int diff;
    
    if (_container.size() == 1)
        throw ContainerHasOneELement();
    if (_container.size() == 0){
        throw ContainerIsEmpty();
    }
	std::sort(_container.begin(), _container.end());
    for (size_t i = 1; i < _container.size(); ++i) {
        diff = _container[i] - _container[i - 1];
        if (diff < minDiff || i == 1)
            minDiff = diff;
    }
    return (minDiff);
}

int Span::longestSpan(){
    if (_container.size() == 1)
        throw ContainerHasOneELement();
    if (_container.size() == 0){ 
        throw ContainerIsEmpty();
    }
    std::sort(_container.begin(), _container.end());
    return (_container.back() - _container.front());
}
