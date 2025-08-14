/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/14 20:06:45 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMeCore.hpp"

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore() {}

template <typename T, typename U>
PmergeMeCore<T, U>::PmergeMeCore( const PmergeMeCore<T, U> &cpy ) {
    *this = cpy;
}

template <typename T, typename U>
PmergeMeCore<T, U>& PmergeMeCore<T, U>::operator=( const PmergeMeCore<T, U> &cpy ) {
    (void) cpy;
    return *this;
}

template <typename T, typename U>
PmergeMeCore<T, U>::~PmergeMeCore() {}

template <typename T, typename U>
void    PmergeMeCore<T, U>::run( char *argv[] ) {
    std::cout << "Algo runned for : " << argv << std::endl;
}

