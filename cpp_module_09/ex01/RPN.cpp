/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:14 by ade-beco          #+#    #+#             */
/*   Updated: 2025/07/29 17:54:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN( const RPN& cpy ) {
    *this = cpy;
}

RPN& RPN::operator=( const RPN& cpy ) {
    (void) cpy;
    return *this;
}

RPN::~RPN() {}

int     RPN::isDigit( const char &element ) {
    if (element >= '0' && element <= '9')
        return TRUE;
    else
        return FALSE;
}

int     RPN::isOperator( const char &element ) {
    if (element == '+' ||  element == '-' || \
            element == '/' || element == '*')
        return TRUE;
    else
        return FALSE;
}

int     RPN::calculate( char sign ) {
    int a;
    int b;

    if (expressionStack.size() < 2) {
        std::cerr << "Error : Does not respect the reverse polish notation" << std::endl;
        exit(EXIT_FAILURE);
    }

    b = expressionStack.top();
    expressionStack.pop();
    a = expressionStack.top();
    expressionStack.pop();

    switch (sign) {
        case '+':
            return (a + b);
        case '-':
            return (a - b);
        case '/':  {
            if (b == 0) {
                std::cerr << "Error : Division by 0" << std::endl;
                exit (EXIT_FAILURE);
            }
            return (a / b);
                }
        case '*':
            return (a * b);
    }
    return 0;
}

void     RPN::expressionProcess( const std::string &expression ) {
    for (unsigned long i = 0; i != expression.length(); i++) {
        if (expression[i] == ' ')
            ;
        else if (isOperator(expression[i]) == TRUE || isDigit(expression[i]) == TRUE) {
            if  (isOperator(expression[i]) == TRUE)
                expressionStack.push(calculate(expression[i]));
            else if (isDigit(expression[i]) == TRUE)
                expressionStack.push(expression[i] - '0');
            if (expression[i + 1] != ' ' && (i - 1) != expression.length()) {
                std::cerr << "Error : Does not respect the reverse polish notation or a number is higher than 9" << std::endl;
                exit (EXIT_FAILURE);
            }
        }
        else {
            std::cerr << "Error : Does not respect the reverse polish notation" << std::endl;
            exit (EXIT_FAILURE);
        }
    }
    if (expressionStack.size() != 1) {
        std::cerr << "Error : Does not respect the reverse polish notation" << std::endl;
        exit (EXIT_FAILURE);
    }
    std::cout << expressionStack.top() << std::endl;
    expressionStack.pop();
}

