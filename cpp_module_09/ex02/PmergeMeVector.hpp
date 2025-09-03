/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:29:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/03 13:01:35 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEVECTOR_HPP
# define PMERGEMEVECTOR_HPP

# include <vector>

# include "PmergeMeCore.hpp"

class PmergeMeVector : public PmergeMeCore < std::vector<int>, std::vector<std::pair <int, int> > > {

    public :
        PmergeMeVector();
        PmergeMeVector( const PmergeMeVector &cpy );
        PmergeMeVector& operator=( const PmergeMeVector &cpy );
        ~PmergeMeVector();
};

#endif
