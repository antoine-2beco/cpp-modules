/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:44:44 by ade-beco          #+#    #+#             */
/*   Updated: 2025/07/31 16:58:26 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMeVector::PmergeMeVector() { (void) dataVector; }

PmergeMeVector::PmergeMeVector( const PmergeMeVector &cpy ) {
    *this = cpy;
}

PmergeMeVector& PmergeMeVector::operator=( const PmergeMeVector &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeVector::~PmergeMeVector() {}

PmergeMeDeque::PmergeMeDeque() { (void) dataDeque; }

PmergeMeDeque::PmergeMeDeque( const PmergeMeDeque &cpy ) {
    *this = cpy;
}

PmergeMeDeque& PmergeMeDeque::operator=( const PmergeMeDeque &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeDeque::~PmergeMeDeque() {}

