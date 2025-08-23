/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:30:34 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/23 18:02:47 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeDeque.hpp"

PmergeMeDeque::PmergeMeDeque() : PmergeMeCore("std::deque") {}

PmergeMeDeque::PmergeMeDeque( const PmergeMeDeque &cpy ) : PmergeMeCore("std::deque") {
    *this = cpy;
}

PmergeMeDeque& PmergeMeDeque::operator=( const PmergeMeDeque &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeDeque::~PmergeMeDeque() {}

