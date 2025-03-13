/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:21:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/13 14:42:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main() {
    ScalarConverter::convert("c");
    ScalarConverter::convert("12");
    ScalarConverter::convert("50.0f");
    ScalarConverter::convert("50.5");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("nanf");
}
