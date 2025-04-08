/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:21:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/08 14:32:55 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main() {
    ScalarConverter::convert("c");
    std::cout << std::endl;
    ScalarConverter::convert("%");
    std::cout << std::endl;
    ScalarConverter::convert("119");
    std::cout << std::endl;
    ScalarConverter::convert("50.997754853f");
    std::cout << std::endl;
    ScalarConverter::convert("50.5");
    std::cout << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
    ScalarConverter::convert("-inf");
    std::cout << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;
    ScalarConverter::convert("+inff");
    std::cout << std::endl;
    ScalarConverter::convert("-inff");
    std::cout << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << std::endl;
}
