/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:29:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 17:02:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0) {
        array = new T[0]();
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {
    array = new T[n]();
}

template <typename T>
Array<T>::Array( const Array &cpy )  : _size(cpy._size) {
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
    _size = cpy._size;
    array = new T[_size]();
    for (int i = 0; i < _size; i++)
        array[i] = cpy.array[i];
    return *this;
}

template <typename T>
T & Array<T>::operator[]( unsigned int n ) {
    if (n >= _size || array == NULL)
        throw Array<T>::OutOfBoundsException();
    return array[n];
}

template <typename T>
unsigned int    Array<T>::size() const {
    return _size;
}

#endif

