/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/23 18:04:36 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_TPP
# define PMERGEMECORE_TPP

# include "PmergeMeCore.hpp"

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
void    PmergeMeCore<T, U>::run( char *argv[] ) {
    std::cout << "Algo runned for : " << argv[1] << " and this type : " << _classType << std::endl;
}

#endif

