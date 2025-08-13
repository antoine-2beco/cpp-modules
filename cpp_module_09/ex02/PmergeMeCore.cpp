/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:26:55 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:27:10 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeCore.hpp"

PmergeMeCore::PmergeMeCore() {}

PmergeMeCore::PmergeMeCore( const PmergeMeCore &cpy ) {
    *this = cpy;
}

PmergeMeCore& PmergeMeCore::operator=( const PmergeMeCore &cpy ) {
    (void) cpy;
    return *this;
}

PmergeMeCore::~PmergeMeCore() {}


