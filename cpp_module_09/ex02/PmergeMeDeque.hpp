/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:31:20 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:46:09 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEDEQUE_HPP
# define PMERGEMEDEQUE_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <deque>

class PmergeMeDeque {

    std::deque<int>  dataDeque;
    std::vector<std::pair <int, int> >   dataPairDeque;

    public :
        PmergeMeDeque();
        PmergeMeDeque( const PmergeMeDeque &cpy );
        PmergeMeDeque& operator=( const PmergeMeDeque &cpy );
        ~PmergeMeDeque();

};

#endif

