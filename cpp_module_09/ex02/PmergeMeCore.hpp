/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:48:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_HPP
# define PMERGEMECORE_HPP

# include "PmergeMeVector.hpp"
# include "PmergeMeDeque.hpp"

class   PmergeMeCore : public PmergeMeVector, public PmergeMeDeque {

    public :
        PmergeMeCore();
        PmergeMeCore( const PmergeMeCore &cpy );
        PmergeMeCore& operator=( const PmergeMeCore &cpy);
        ~PmergeMeCore();

};

#endif

