/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:00:08 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/08 16:28:40 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

# include <stdint.h>

class Serializer {

    Serializer();
    Serializer( const Serializer& cpy );
    Serializer& operator=( const Serializer& cpy );
    ~Serializer();

    public:
        static uintptr_t   serialize( Data* ptr );
        static Data*        deserialize( uintptr_t raw);
};

#endif
