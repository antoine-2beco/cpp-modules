/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeCore.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:28:27 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMECORE_HPP
# define PMERGEMECORE_HPP

class   PmergeMeCore {

    public :
        PmergeMeCore();
        PmergeMeCore( const PmergeMeCore &cpy );
        PmergeMeCore& operator=( const PmergeMeCore &cpy);
        ~PmergeMeCore();

};

#endif

