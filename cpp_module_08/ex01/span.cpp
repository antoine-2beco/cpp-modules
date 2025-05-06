/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:21:50 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 16:33:55 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( unsigned int n ) : _maximumValue(n) {}

Span::Span( const Span& cpy ) {
    *this = cpy;
}

Span&    Span::operator=( const Span& cpy ) {
    if (this != &cpy)
        _maximumValue = cpy._maximumValue;
        list = cpy.list;
    return *this;
}

Span::~Span() {}

void    Span::addNumber( const int n ) {
    if (list.size() == _maximumValue)
        throw maximumValueStoredReachedException();
    list.push_back(n);
}

int Span::shortestSpan() {
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

int Span::longestSpan() {
    if (list.size() <= 1)
        throw noSpanCanBeFoundException();
    return (*std::max_element(list.begin(), list.end()) - *std::min_element(list.begin(), list.end()));
}

std::ostream&    operator<<( std::ostream& os, Span const &span ) {
    for (std::vector<int>::const_iterator it = span.list.begin(); it != span.list.end(); it++) {
        os << " " << *it;
    }
    return os;
}

