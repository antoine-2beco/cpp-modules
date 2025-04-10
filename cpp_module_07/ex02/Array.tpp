/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:29:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 15:59:49 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template <typename T>
Array<T>::Array() : size(0) {
        array = new T[0]();
}

template <typename T>
Array<T>::Array( unsigned int n ) : size(n) {
    array = new T[n]();
}

template <typename T>
Array<T>::Array( const Array &cpy )  : size(cpy.size) {
    array = NULL;
    *this = cpy;
}

template <typename T>
Array<T>::~Array() {
    if (array != NULL)
        delete [] array;
}

template <typename T>
Array<T> & Array<T>::operator=( const Array &cpy ) {
    if (array != NULL)
        delete [] array;
    size = cpy.size;
    for (int i = 0; i < size; i++)
        array = cpy.array;
    return *this;
}

#endif

