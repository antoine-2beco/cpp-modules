/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.Getters.tpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:11:19 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/28 14:21:12 by ade-beco         ###   ########.fr       */
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
long long int   PmergeMeCore<T, U>::getChrono() {
    return _chrono;
}

template <typename T, typename U>
long long int PmergeMeCore<T, U>::getTime() {
    struct timeval  tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

#endif
