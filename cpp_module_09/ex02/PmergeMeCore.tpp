/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/27 16:54:48 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_TPP
# define PMERGEMECORE_TPP

# include "PmergeMeCore.hpp"
# include <unistd.h>

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore() : _containerType("unknow container type") {}

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore( const std::string containerType ) : _containerType(containerType) {}

template <typename T, typename U>
PmergeMeCore<T, U>::~PmergeMeCore() {}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_divideSortedPairs() {
    // const_iterator for deferencing the value of pairs
    typename U::const_iterator it = getPairs().begin();

    getMain().push_back(it->second);
    getMain().push_back(it->first);
    it++;

    while ( it != getPairs().end() ) {
        getMain().push_back(it->first);
        getPend().push_back(it->second);
        it++;
    }
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_merge( typename U::iterator begin, typename U::iterator mid, typename U::iterator end ) {
    U   firstHalf(begin, mid);
    U   secondHalf(mid, end);

    typename U::iterator    itFirstHalf = firstHalf.begin();
    typename U::iterator    itSecondHalf = secondHalf.begin();
    typename U::iterator    it = begin;

    while ( itFirstHalf != firstHalf.end() && itSecondHalf != secondHalf.end() ) {
        if (itFirstHalf->first <= itSecondHalf->first )
            *it = *itFirstHalf++;
        else
            *it = *itSecondHalf++;
        it++;
    }
    while ( itFirstHalf != firstHalf.end() )
        *it++ = *itFirstHalf++;
    while ( itSecondHalf != secondHalf.end() )
        *it++ = *itSecondHalf++;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_mergeSort( typename U::iterator begin, typename U::iterator end ) {
    if (std::distance(begin, end) > 1) {
        typename U::iterator    mid = begin;
        std::advance(mid, (std::distance(begin, end) / 2));
        _mergeSort(begin, mid);
        _mergeSort(mid, end);
        _merge(begin, mid, end);
    }
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_makePairs() {
    typename T::iterator   it = getSequence().begin();
    int first;
    int second;

    while ( it != getSequence().end() ) {
        first = *it;
        it++;
        if  (it != getSequence().end() ) {
            second = *it++;
            if (first < second)
                std::swap(first, second);
            getPairs().insert(getPairs().end(), std::make_pair(first, second));
        }
    }
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_mergeInsertionSort() {
    if (getSequence().size() <= 1)
        getMain() = getSequence();
    else {
        _makePairs();
        _mergeSort(getPairs().begin(), getPairs().end());
        _divideSortedPairs();
        /*printPair();
        std::cout << "Main : ";
        printContainer(getMain());
        std::cout << "Pend : ";
        printContainer(getPend());*/
    }
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::run( int nArgs, char *args[] ) {
    char    *endPtr;
    nArgs--;

    if (nArgs == 0) {
        std::cerr << "Error : no argument" << std::endl;
        exit(EXIT_FAILURE);
    }
    for ( int i = 1; i <= nArgs; i++ ) {
        for ( unsigned int j = 0; j < strlen(args[i]); j++ ) {
            if (args[i][j] < '0' || args[i][j] > '9') {
                std::cerr << "Error : bad argument : only digits : " << args[i][j] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        for ( int k = 1; k <= nArgs; k++ ) {
            char    *endptr;
            std::string iNum = args[i];
            std::string kNum = args[k];
            if ( i != k && strtoll(iNum.c_str(), &endptr, 10) == strtoll(kNum.c_str(), &endptr,  10) ) {
                std::cerr << "Error : bad argument : same numbers : " << args[i] << " == " << args[k] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
    }
    for ( int i = 1; i <= nArgs; i++ )
        getSequence().insert(getSequence().end(), strtoll(args[i], &endPtr, 10));

    long long int start = getTime();
    _mergeInsertionSort();
    _chrono = getTime() - start;
}

#endif

