/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:31:20 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/03 13:01:29 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEDEQUE_HPP
# define PMERGEMEDEQUE_HPP

# include <deque>

# include "PmergeMeCore.hpp"

class PmergeMeDeque : public PmergeMeCore < std::deque<int>, std::deque<std::pair <int, int> > > {

    public :
        PmergeMeDeque();
        PmergeMeDeque( const PmergeMeDeque &cpy );
        PmergeMeDeque& operator=( const PmergeMeDeque &cpy );
        ~PmergeMeDeque();

};

#endif
