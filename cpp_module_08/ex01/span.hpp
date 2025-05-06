/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:17:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 15:43:33 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {

    unsigned int     _maximumValue;

    public:
        Span( unsigned int n );
        Span( const Span& cpy );
        Span& operator=( const Span& cpy );
        ~Span();

        std::vector<int>     list;

        void    addNumber( const int n );
        int     shortestSpan();
        int     longestSpan();

        class maximumValueStoredReachedException : public std::exception {
            public :
                virtual const char* what() const throw() { return "maximum value stored reached"; } ;
        };
        class noSpanCanBeFoundException : public std::exception {
            public :
                virtual const  char* what() const throw() { return "no span can be found"; } ;
        };

};

std::ostream&   operator<<( std::ostream& os, Span const &span );

#endif
