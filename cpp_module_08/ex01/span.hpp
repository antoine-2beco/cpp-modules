/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:17:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 13:48:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span {

    std::vector<int>     _list;
    unsigned int     _maximumValue;

    public:
        Span( unsigned int n );
        Span( const Span& cpy );
        Span& operator=( const Span& cpy );
        ~Span();

        void    addNumber( const int n );

        class maximumValueStoredReachedException : public std::exception {
            public :
                virtual const char* what() const throw() { return "maximum value stored reached"; } ;
        };
};

#endif
