/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:17:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 13:23:13 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span {
    unsigned int     _maximumValue;

    public:
        Span( unsigned int n );
        Span( const Span& cpy );
        Span& operator=( const Span& cpy );
        ~Span();
};

#endif
