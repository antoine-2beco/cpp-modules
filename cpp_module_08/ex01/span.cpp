/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:21:50 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 13:29:42 by ade-beco         ###   ########.fr       */
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
    return *this;
}

Span::~Span() {}

