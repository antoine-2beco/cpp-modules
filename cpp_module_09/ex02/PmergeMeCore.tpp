/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/25 12:55:03 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_TPP
# define PMERGEMECORE_TPP

# include "PmergeMeCore.hpp"
# include <unistd.h>

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore( const std::string classType ) : _classType(classType) {
    data = new T;
    dataPair = new U;
}

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore( const PmergeMeCore<T, U> &cpy ) {
    *this = cpy;
}

template <typename T, typename U>
PmergeMeCore<T, U>& PmergeMeCore<T, U>::operator=( const PmergeMeCore<T, U> &cpy ) {
    _classType = cpy._classType;
    return *this;
}

template <typename T, typename U>
PmergeMeCore<T, U>::~PmergeMeCore() {}

template <typename T, typename U>
void    PmergeMeCore<T, U>::run( int nArgs, char *args[] ) {
    char    *endPtr;

    std::cout << "Before : ";
    for ( int i = 1; i < nArgs; i++ ) {
        std::cout << args[i] << " ";
        std::string arg = args[i];
        data->insert(data->end(), strtoll(arg.c_str(), &endPtr, 10));
    }
    std::cout << std::endl;
    std::time_t *nullPtr = NULL;
    std::time_t start = std::time(nullPtr);
    std::time_t end = std::time(nullPtr);

    std::cout << "After : ";
    for (typename T::iterator    it = data->begin(); it != data->end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << " Time to process a range of " << (nArgs - 1) << " elements with " << _classType << " : " << (std::difftime(end, start) * 1000000) << " us." << std::endl;
}

#endif

