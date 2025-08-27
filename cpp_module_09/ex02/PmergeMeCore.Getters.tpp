/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.Getters.tpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:11:19 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/27 12:27:03 by ade-beco         ###   ########.fr       */
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

#endif
