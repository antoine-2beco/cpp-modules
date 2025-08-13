/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:29:32 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:29:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeVector.hpp"

PmergeMeVector::PmergeMeVector() { (void) dataVector; }

PmergeMeVector::PmergeMeVector( const PmergeMeVector &cpy ) {
    *this = cpy;
}

PmergeMeVector& PmergeMeVector::operator=( const PmergeMeVector &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeVector::~PmergeMeVector() {}


