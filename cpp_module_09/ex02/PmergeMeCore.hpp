/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/27 13:08:51 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_HPP
# define PMERGEMECORE_HPP

# include <iostream>
# include <ctime>

template <typename T, typename U>
class   PmergeMeCore {

    private :
        T   _sequence;
        U   _pairs;
        T   _main;
        std::string _containerType;

        PmergeMeCore( const PmergeMeCore &cpy );
        PmergeMeCore& operator=( const PmergeMeCore &cpy);

        void    _mergeSort( typename U::iterator begin, typename U::iterator end );
        void    _makePairs();
        void    _mergeInsertionSort();

    protected :
        T   &getSequence();
        U   &getPairs();
        T   &getMain();

    public :
        PmergeMeCore();
        PmergeMeCore( const std::string classType );
        virtual ~PmergeMeCore();

        void    run( int nArgs, char *args[] );

        void    printPair() {
            for ( typename U::iterator  itPair = getPairs().begin(); itPair != getPairs().end(); itPair++)
                std::cout << itPair->first << "-" << itPair->second << " | ";
            std::cout << std::endl;
        };

};

# include "PmergeMeCore.tpp"
# include "PmergeMeCore.Getters.tpp"

#endif

