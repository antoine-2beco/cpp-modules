/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:15:22 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 15:27:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

    T               *array;
    unsigned int    size;

    public:
        Array();
        Array( unsigned int n );
        Array( const Array &cpy );
        const Array &operator=( const Array &cpy );
        ~Array();
};

#endif
