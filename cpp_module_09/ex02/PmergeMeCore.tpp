/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/26 12:57:18 by ade-beco         ###   ########.fr       */
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

/* template <typename T, typename U>
void    PmergeMeCore<T, U>::makePair() {
    int higherArg;
    int lowerArg;
    for ( typename T::iterator   it = data->begin(); (it + (_nArgs % 2)) != data->end(); it++ ) {
        higherArg = std::max(*it, *(it + 1));
        lowerArg = std::min(*it, *(++it));
        dataPair->insert(dataPair->end(), std::make_pair(higherArg, lowerArg));
    }
    if (_nArgs % 2 == 1)
        unpairedArg = data->back();
    printPair();
} */

template <typename T, typename U>
void    PmergeMeCore<T, U>::mergeInsertionSort( T &input ) {
    T   bigs;
    T   smalls;

    if (input.size() <= 1)
        return ;

    for ( typename T::iterator  it = input.begin(); (it + (input.size() % 2)) != input.end(); it++) {
        if (*it > (*it + 1)) {
            bigs.push_back(*it);
            smalls.push_back(*(++it));
        }
        else {
            smalls.push_back(*it);
            bigs.push_back(*(++it));
        }
    }

    int leftover = (input.size() % 2 == 1 ? -1 : input.back());

    mergeInsertionSort(bigs);

    std::cout << "bigs : ";
    for ( typename T::iterator  it = bigs.begin(); it != bigs.end(); it++)
        std::cout << *it << " ";


    std::cout << std::endl;
    (void)leftover;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::run( int nArgs, char *args[] ) {
    _nArgs = nArgs - 1;
    char    *endPtr;
    std::time_t *nullPtr = NULL;

    for ( unsigned int i = 1; i <= _nArgs; i++ )
        data->insert(data->end(), strtoll(args[i], &endPtr, 10));

    std::cout << "Before :";
    for (typename T::iterator    it = data->begin(); it != data->end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;

    std::time_t start = std::time(nullPtr);
    mergeInsertionSort( *data );
    std::time_t end = std::time(nullPtr);

    std::cout << "After :";
    for (typename T::iterator    it = data->begin(); it != data->end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _nArgs << " elements with " << _classType << " : " << (std::difftime(end, start) * 1000000) << " us." << std::endl;
}

#endif

