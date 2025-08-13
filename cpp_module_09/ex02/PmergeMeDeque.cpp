/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:30:34 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:30:51 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeDeque.hpp"

PmergeMeDeque::PmergeMeDeque() { (void) dataDeque; }

PmergeMeDeque::PmergeMeDeque( const PmergeMeDeque &cpy ) {
    *this = cpy;
}

PmergeMeDeque& PmergeMeDeque::operator=( const PmergeMeDeque &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeDeque::~PmergeMeDeque() {}

