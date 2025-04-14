/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:28:24 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 17:08:29 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"
#include "Array.tpp"

int main() {
    Array<int> a;
    Array<char> b(4);
    Array<char> c(b);

    std::cout << "b[1] = " << b[1] << std::endl;

    b[0] = 'a';
    b[1] = 'b';
    b[2] = 'c';
    b[3] = 'd';

    std::cout << "b[1] = " << b[1] << std::endl;
    std::cout << "c[1] = " << c[1] << std::endl;

    c = b;

    std::cout << "c[1] = " << c[1] << std::endl;

    try {
        std::cout << "c[10] = " << c[10] << std::endl;
    }
    catch ( std::exception &e ) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "size of a = " << a.size() << std::endl;
    std::cout << "size of b = " << b.size() << std::endl;
    std::cout << "size of c = " << c.size() << std::endl;
}

