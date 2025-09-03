/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/03 13:19:25 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_HPP
# define PMERGEMECORE_HPP

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <climits>
# include <sys/time.h>

template <typename T, typename U>
class   PmergeMeCore {

    private :
        T   _sequence;
        U   _pairs;
        T   _main;
        T   _pend;
        T   _insertIndexes;
        std::string _containerType;
        double _chrono;

        PmergeMeCore( const PmergeMeCore &cpy );
        PmergeMeCore& operator=( const PmergeMeCore &cpy);

        void    _divideSortedPairs();
        void    _merge( typename U::iterator begin, typename U::iterator mid, typename U::iterator end );
        void    _mergeSort( typename U::iterator begin, typename U::iterator end );
        void    _makePairs();
        void    _mergeInsertionSort();
        T       _insertSequence( size_t n );
        size_t  _jacobsthalAlgo( size_t index );
        void    _insertionSort();
        typename T::iterator _binarySearch( int value, typename T::iterator left, typename T::iterator right );

    protected :
        T   &getSequence();
        U   &getPairs();
        T   &getMain();
        T   &getPend();
        T   &getInsertIndexes();
        std::string getContainerType();
        double   getChrono();

    public :
        PmergeMeCore();
        PmergeMeCore( const std::string classType );
        virtual ~PmergeMeCore();

        void    run( int nArgs, char *args[] );

        void    printBefore();
        void    printAfter();
        void    printTime();
};

# include "PmergeMeCore.tpp"
# include "PmergeMeCore.Getters.tpp"
# include "PmergeMeCore.Prints.tpp"

#endif
