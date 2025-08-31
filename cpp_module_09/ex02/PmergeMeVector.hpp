/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:29:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/23 17:48:37 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEVECTOR_HPP
# define PMERGEMEVECTOR_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <deque>

# include "PmergeMeCore.hpp"

class PmergeMeVector : public PmergeMeCore < std::vector<int>, std::vector<std::pair <int, int> > > {

    public :
        PmergeMeVector();
        PmergeMeVector( const PmergeMeVector &cpy );
        PmergeMeVector& operator=( const PmergeMeVector &cpy );
        ~PmergeMeVector();
};

#endif

