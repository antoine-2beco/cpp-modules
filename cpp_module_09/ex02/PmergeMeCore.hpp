/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/25 18:36:45 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_HPP
# define PMERGEMECORE_HPP

# include <iostream>
# include <ctime>

template <typename T, typename U>
class   PmergeMeCore {

    protected :
        T   *data;
        U   *dataPair;
        int   unpairedArg;
        unsigned int  _nArgs;
        std::string _classType;

    public :
        PmergeMeCore( const std::string classType );
        PmergeMeCore( const PmergeMeCore &cpy );
        PmergeMeCore& operator=( const PmergeMeCore &cpy);
        ~PmergeMeCore();

        void    run( int nArgs, char *args[] );
        void    runAlgo();
        void    makePair();


        void    printPair() {
            for ( typename U::iterator  itPair = dataPair->begin(); itPair != dataPair->end(); itPair++)
                std::cout << itPair->first << "-" << itPair->second << " | ";
            std::cout << unpairedArg << std::endl;
        };

};

# include "PmergeMeCore.tpp"

#endif

