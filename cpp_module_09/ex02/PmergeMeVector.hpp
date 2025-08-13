/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:29:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:46:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEVECTOR_HPP
# define PMERGEMEVECTOR_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <deque>

class PmergeMeVector {

    std::vector<int> dataVector;
    std::vector<std::pair <int, int> >  dataPairVector;

    public :
        PmergeMeVector();
        PmergeMeVector( const PmergeMeVector &cpy );
        PmergeMeVector& operator=( const PmergeMeVector &cpy );
        ~PmergeMeVector();

};

#endif

