/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:39:59 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 13:56:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void    charIsUpperThanC( char c ) {
    if (c >= 'c')
        std::cout << c << " is upper or equal to c !" << std::endl;
}

int main() {
    char array[5] = {'a', 'b', 'c', 'd', 'z'};

    ::iter(array, 5, charIsUpperThanC);
}

