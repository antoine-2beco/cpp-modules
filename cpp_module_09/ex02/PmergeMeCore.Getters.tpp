/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.Getters.tpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:11:19 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/03 12:58:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_GETTERS_TPP
# define PMERGEMECORE_GETTERS_TPP

# include "PmergeMeCore.hpp"

template <typename T, typename U>
T &PmergeMeCore<T, U>::getSequence() {
    return _sequence;
}

template <typename T, typename U>
U &PmergeMeCore<T, U>::getPairs() {
    return _pairs;
}

template <typename T, typename U>
T &PmergeMeCore<T, U>::getMain() {
    return _main;
}

template <typename T, typename U>
T &PmergeMeCore<T, U>::getPend() {
    return _pend;
}

template <typename T, typename U>
T &PmergeMeCore<T, U>::getInsertIndexes() {
    return _insertIndexes;
}

template <typename T, typename U>
std::string PmergeMeCore<T, U>::getContainerType() {
    return _containerType;
}

template <typename T, typename U>
double   PmergeMeCore<T, U>::getChrono() {
    return _chrono;
}

#endif
