/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:59:47 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/08 16:28:11 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {};

Serializer::Serializer( const Serializer& cpy ) {};

Serializer& Serializer::operator=( const Serializer& cpy ) { return *this; }

Serializer::~Serializer() {};

static uintptr_t   serialize( Data* ptr ) {
    return reinterpret_cast<uintptr_t>(ptr);
}

static Data*    deserialize( uintptr_t raw ) {
    return reinterpret_cast<Data*>(raw);
}
