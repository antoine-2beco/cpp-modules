/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:37 by ade-beco          #+#    #+#             */
/*   Updated: 2025/06/10 12:57:56 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>

# define TRUE 0
# define FALSE 1

class RPN {

    std::stack<char>         expressionStack;

    int     calculate( int first, int second, char sign );
    int     expressionProcess();
    int     expressionParsing( const std::string &expression );
    int     validElement( const char &element, int index );
    int     isDigit( const char &element );
    int     isOperator( const char &element );

    public :
        RPN();
        RPN( const RPN &cpy );
        RPN& operator=( const RPN &cpy );
        ~RPN();

        void    run( const std::string &expression );
};

#endif

