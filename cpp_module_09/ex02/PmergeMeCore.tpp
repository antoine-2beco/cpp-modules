/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/04 12:07:45 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_TPP
# define PMERGEMECORE_TPP

# include "PmergeMeCore.hpp"

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore() : _containerType("unknow container type") {}

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore( const std::string containerType ) : _containerType(containerType) {}

template <typename T, typename U>
PmergeMeCore<T, U>::~PmergeMeCore() {}

template <typename T, typename U>
typename T::iterator PmergeMeCore<T, U>::_binarySearch( int value, typename T::iterator left, typename T::iterator right ) {
    typename T::iterator mid;

    while ( std::distance(left, right) > 1 ) {
        mid = left;
        std::advance(mid, std::distance(left, right) / 2);
        if (value > *mid)
            left = mid;
        else
            right = mid;
    }
    if (value > *left)
        return ++left;
    return left;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_insertionSort() {
    typename T::iterator    toInsert;
    typename T::iterator    insertionIndex;
    typename T::iterator    lastIndex;
    size_t                  insertCount = 1;

    for ( typename T::iterator it = getInsertIndexes().begin(); it != getInsertIndexes().end(); it++ ) {
        toInsert = getPend().begin();
        std::advance(toInsert, *it - 1);
        lastIndex = getMain().begin();
        std::advance(lastIndex, *it + insertCount);
        insertCount++;
        insertionIndex = _binarySearch(*toInsert, getMain().begin(), lastIndex);
        getMain().insert(insertionIndex, *toInsert);
    }
}

template <typename T, typename U>
size_t  PmergeMeCore<T, U>::_jacobsthalAlgo( size_t index ) {
    if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return _jacobsthalAlgo(index - 1) + 2 * _jacobsthalAlgo(index - 2);
}

template <typename T, typename U>
T       PmergeMeCore<T, U>::_insertSequence( size_t n ) {
    int index = 3;
    T   insertSeq;
    size_t  jacobsthalVal;
    size_t  prevJacobsthalVal;
    T   jacobsthalSeq;

    if (n == 0)
        return insertSeq;

    jacobsthalVal = _jacobsthalAlgo(index);
    while ( jacobsthalVal < n - 1 ) {
        jacobsthalSeq.push_back(jacobsthalVal);
        jacobsthalVal = _jacobsthalAlgo(++index);
    }

    prevJacobsthalVal = 0;
    for ( typename T::const_iterator itJacobsthalVal = jacobsthalSeq.begin(); itJacobsthalVal != jacobsthalSeq.end(); itJacobsthalVal++ ) {
        insertSeq.push_back(*itJacobsthalVal);
        for ( size_t i = *itJacobsthalVal - 1; i > prevJacobsthalVal; i-- )
            insertSeq.push_back(i);
        prevJacobsthalVal = *itJacobsthalVal;
    }

    while ( prevJacobsthalVal++ < n )
        insertSeq.push_back(prevJacobsthalVal);
    return insertSeq;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::_divideSortedPairs() {
    typename U::const_iterator it = getPairs().begin();

    getMain().push_back(it->second);
    getMain().push_back(it->first);
    it++;

    while ( it != getPairs().end() ) {
        getMain().push_back(it->first);
        getPend().push_back(it->second);
        it++;
    }
    if (getSequence().size() % 2 == 1)
        getPend().push_back(getSequence().back());
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
        getInsertIndexes() = _insertSequence(getPend().size());
        _insertionSort();
    }
}

template <typename T, typename U>
T   &PmergeMeCore<T, U>::run( int nArgs, char *args[] ) {
    char    *endPtr;
    double  start;
    long long int     toInsert;
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
    for ( int i = 1; i <= nArgs; i++ ) {
        toInsert = strtoll(args[i], &endPtr, 10);
        if ( strlen(args[i]) > 10 || toInsert > INT_MAX) {
            std::cerr << "Error : number reached limit : " << args[i] << std::endl;
            exit(EXIT_FAILURE);
        }
        getSequence().insert(getSequence().end(), static_cast<int>(toInsert));
    }

    start = clock();
    _mergeInsertionSort();
    _chrono = (double)(clock() - start) / CLOCKS_PER_SEC * 1000;

    return (getMain());
}

#endif
