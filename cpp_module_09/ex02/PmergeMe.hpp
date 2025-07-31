/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:02 by ade-beco          #+#    #+#             */
/*   Updated: 2025/07/31 17:07:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <deque>

class PmergeMeVector {

    std::vector<int> dataVector;

    public :
        PmergeMeVector();
        PmergeMeVector( const PmergeMeVector &cpy );
        PmergeMeVector& operator=( const PmergeMeVector &cpy );
        ~PmergeMeVector();

};

class PmergeMeDeque {

    std::deque<int>  dataDeque;

    public :
        PmergeMeDeque();
        PmergeMeDeque( const PmergeMeDeque &cpy );
        PmergeMeDeque& operator=( const PmergeMeDeque &cpy );
        ~PmergeMeDeque();

};

#endif

