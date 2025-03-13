/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:17:26 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/13 14:51:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter& cpy) {}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& cpy ) { return *this; }

ScalarConverter::~ScalarConverter() {}

static void specialCase( const std::string& str) {
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    if ( str == "-inf" || str == "+inf" || str == "nan" ) {
        std::cout << "float : " << str << "f" << std::endl;
        std::cout << "double : " << str << std::endl;
        return;
    }
    std::cout << "float : " << str << std::endl; 
    if ( str == "+inff" )
        std::cout << "+inf" << std::endl;
    else if ( str == "-inff" )
        std::cout << "-inf" << std::endl;
    else
        std::cout << "nan" << std::endl;
    return;
}

static void impossibleCase() {
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : impossible" << std::endl;
    std::cout << "double : impossible" << std::endl;
}

static int getType( const std::string& str ) {
    if (str.length() == 1 && str[0] > 31 && ( str[0] < 48 && str[0] > 57 ))
        return CHAR;
    return 0;
}

void ScalarConverter::convert( const std::string& str ) {
    if (str.empty())
        return (impossibleCase());
    if ( str == "-inf" || str == "+inf" || str == "nan" || \
            str == "-inff" || str == "+inff" || str == "nanf" )
        return ( specialCase(str) ) ;
    int type = getType(str);
}

