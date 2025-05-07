/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:21:50 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/07 13:45:25 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _storageSize(0) {
    list.reserve(0);
}

Span::Span( unsigned int n ) : _storageSize(n) {
    list.reserve(n);
}

Span::Span( const Span& cpy ) {
    *this = cpy;
}

Span&    Span::operator=( const Span& cpy ) {
    if (this != &cpy)
        _storageSize = cpy._storageSize;
        list = cpy.list;
    return *this;
}

Span::~Span() {}

void    Span::addNumber( const int n ) {
    if (list.size() == _storageSize)
        throw maximumValueStoredReachedException();
    list.push_back(n);
}

void    Span::fillList() {
    unsigned int    toFill = (list.capacity() - list.size());
    std::list<int>  randomList;
    for (unsigned int i = 0; i < toFill; i++)
        randomList.push_back(std::rand()%100);
    list.insert(list.end(), randomList.cbegin(), randomList.cend());
}

int Span::shortestSpan() const {
    int                 span;
    std::vector<int>    tmp;

    if (list.size() <= 1)
        throw noSpanCanBeFoundException();
    tmp = list;
    std::sort(tmp.begin(), tmp.end());
    for (std::vector<int>::iterator it = tmp.begin(); (it + 1) != tmp.end(); it++) {
        if (!span || (*(it + 1) - *it) < span)
            span = *(it + 1) - *it;
    }
    return span;
}

int Span::longestSpan() const {
    if (list.size() <= 1)
        throw noSpanCanBeFoundException();
    return (*std::max_element(list.begin(), list.end()) - *std::min_element(list.begin(), list.end()));
}

std::ostream&    operator<<( std::ostream& os, const Span &span ) {
    os << "list capacity : " << span.list.capacity() << std::endl;
    os << "list size : " << span.list.size() << std::endl;
    os << "shortestSpan : " << span.shortestSpan() << std::endl;
    os << "longestSpan : " << span.longestSpan() << std::endl;
    os << "list elements : ";
    for (std::vector<int>::const_iterator it = span.list.begin(); it != span.list.end(); it++) {
        os << " " << *it;
    }
    os << std::endl;
    return os;
}

