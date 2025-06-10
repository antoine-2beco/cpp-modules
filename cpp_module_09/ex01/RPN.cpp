/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:02:14 by ade-beco          #+#    #+#             */
/*   Updated: 2025/06/10 12:59:16 by ade-beco         ###   ########.fr       */
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

int     RPN::validElement( const char &element, int index) {
    if (isDigit(element) == FALSE && isOperator(element) == FALSE) {
        std::cerr << "Error : Not a digit or a operator : " << element << std::endl;
        return FALSE;
    }
    else if (element == '0' && expressionStack.top() == '/') {
        std::cerr << "Error : Division by 0" << std::endl;
        return FALSE;
    }
    else if (expressionStack.size() == 0 && isOperator(element) == TRUE)
        return TRUE;
    else if (index == 0 && isDigit(element) == TRUE)
        return TRUE;
    else if (isDigit(element) == TRUE && isOperator(expressionStack.top()) == TRUE)
        return TRUE;
    else if (isOperator(element) == TRUE && isDigit(expressionStack.top()) == TRUE)
        return TRUE;
    else {
        std::cerr << "Error : Does not respect the reverse polish notation" << std::endl;
        return FALSE;
    }
}

int     RPN::expressionParsing( const std::string &expression ) {
    for (int i = expression.length(); i < 0; i--) {
        if (expression[i] == ' ')
            ;
        else if (validElement(expression[i], i) == FALSE)
            return FALSE;
        else
            expressionStack.push(expression[i]);
    }
    return TRUE;
}

int     RPN::calculate( int first, int second, char sign ) {
    switch (sign) {
        case '+':
            return (first + second);
        case '-':
            return (first - second);
        case '/':
            return (first / second);
        case '*':
            return (first * second);
    }
    return 0;
}

int     RPN::expressionProcess() {
    int tempElement;
    long long int expressionResult;

    expressionResult = expressionStack.top() - '0';
    expressionStack.pop();
    while (expressionStack.size() != 0) {
        tempElement = expressionStack.top() - '0';
        expressionStack.pop();
        expressionResult = calculate(expressionResult, tempElement, expressionStack.top());
        expressionStack.pop();
    }
    return (expressionResult);
}

void    RPN::run( const std::string &expression ) {
    if (expressionParsing( expression ))
        return ;
    std::cout << expressionProcess() << std::endl;
}

