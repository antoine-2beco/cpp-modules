/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.Prints.tpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:27:35 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/27 16:32:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_PRINTS_TPP
# define PMERGEMECORE_PRINTS_TPP

# include "PmergeMeCore.hpp"

template <typename T, typename U>
void    PmergeMeCore<T, U>::printBefore() {
    std::cout << "Before :";
    for (typename T::iterator    it = getSequence().begin(); it != getSequence().end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::printAfter() {
    std::cout << "After :";
    for (typename T::iterator    it = getMain().begin(); it != getMain().end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

template <typename T, typename U>
void    PmergeMeCore<T, U>::printTime() {
    std::cout << "Time to process a range of " << std::distance(getSequence().begin(), getSequence().end()) << " elements with " << getContainerType() << " : " << getChrono() << " us." << std::endl;
}


# endif
