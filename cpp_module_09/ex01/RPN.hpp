/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:37 by ade-beco          #+#    #+#             */
/*   Updated: 2025/06/10 11:32:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>

class RPN {

    std::stack<std::string>         expressionStack;

    void    expressionParsing( const std::string &expression );
    void    expressionProcess();

    public :
        RPN();
        RPN( const RPN &cpy );
        RPN& operator=( const RPN &cpy );
        ~RPN();

        void    run( const std::string &expression );
};

#endif

