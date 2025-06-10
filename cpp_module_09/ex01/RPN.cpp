/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:14 by ade-beco          #+#    #+#             */
/*   Updated: 2025/06/10 11:21:26 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN( const RPN& cpy ) {
    *this = cpy;
}

RPN& RPN::operator= ( const RPN& cpy ) {
    (void) cpy;
    return *this;
}

RPN::~RPN() {}


