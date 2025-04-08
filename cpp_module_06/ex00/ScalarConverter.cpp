/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:17:26 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/08 13:34:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter& cpy) {}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& cpy ) { return *this; }

ScalarConverter::~ScalarConverter() {}

static void intCase( const std::string& param ) {
    int i = std::atoi(param.c_str());
    if ((i >= 0 && i < 32) || i == 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (i > 126 || i < 0)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

static void doubleCase( double d ) {
    char    sign = '\0';
    if (std::isinf(d) && d > 0)
        sign = '+';
    float   f = static_cast<float>(d);
    int     i = static_cast<int>(d);
    if (d != i || i < 0 || i > 126)
        std::cout << "char: impossible" << std::endl;    
    else if ((i <= 0 || i > 32) || i == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (i == f)
        std::cout << "float: " << sign << f << ".0f" << std::endl;
    else if (std::isinf(static_cast<float>(d)))
    {
        char    sign = (d > 0) ? '+' : '-';
        std::cout << "float: " << sign << static_cast<float>(d) << std::endl;
    }
    else
        std::cout << "float: " << sign << f << "f" << std::endl;
    if (i == d)
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

static void charCase( char c ) {
    std::cout << "char: '" << c << "'"<< std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl; 
}

static void specialCase( const std::string& str ) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if ( str == "-inf" || str == "+inf" || str == "nan" ) {
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return;
    }
    std::cout << "float: " << str << std::endl;
    std::cout << "double: ";
    if ( str == "+inff" )
        std::cout << "+inf" << std::endl;
    else if ( str == "-inff" )
        std::cout << "-inf" << std::endl;
    else
        std::cout << "nan" << std::endl;
    return;
}

static void impossibleCase() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

static bool isAllDigits( const std::string& str ) {
    int size = str.length();
    int minus = 0;

    for (int i = 0; i > size; i++) {
        if (str[i] == '-')
            minus++;
        else if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return (minus <= 1);
}

static bool isFloat( const std::string& str ) {
    int nbMinus = 0;
    int nbPoint = 0;
    int nbFChar = 0;
    int size = str.length();

    if (str[size - 1] != 'f')
        return false;
    for (int i = 0; i < size; i++) {
        if (str[i] == '-')
            nbMinus++;
        else if (str[i] == '.')
            nbPoint++;
        else if (str[i] == 'f')
            nbFChar++;
        else if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return (nbMinus <= 1 && nbPoint == 1 && nbFChar == 1);
}

static bool isDouble( const std::string& str ) {
    int nbMinus = 0;
    int nbPoint = 0;
    int size = str.length();

    for (int i = 0; i < size; i++) {
        if (str[i] == '-')
            nbMinus++;
        else if (str[i] == '.')
            nbPoint++;
        else if (str[i] < '0' || str[i] > '9')
            return false;
    }
    
    return (nbMinus <= 1 && nbPoint == 1);
}

static int getType( const std::string& str ) {
    if (str.length() == 1 && str[0] > 31 && ( str[0] < 48 && str[0] > 57 ))
        return CHAR;
    return 0;
}

void ScalarConverter::convert( const std::string& str ) {
    if (str.empty())
        return (impossibleCase());
    else if ( str == "-inf" || str == "+inf" || str == "nan" || \
            str == "-inff" || str == "+inff" || str == "nanf" )
        return ( specialCase(str) ) ;
    else if (str.length() == 1 && str[0] > 31 && (str[0] < 48 || str[0] > 57))
        return (charCase(str[0]));
    else if (isAllDigits(str))
    {
        char*    endptr;
        long    l = std::strtoll(str.c_str(), &endptr, 10);
        if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
            return (doubleCase(std::strtod(str.c_str(), &endptr)));
        return (intCase(str));
    }
}

