/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:16:06 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/31 14:21:26 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main() {
    Span    a(5);
    Span    c(10000);
    Span*   d = new Span(111);


    for (int i = 0; i < 7; i++) {
        try {
            a.addNumber(i);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        c.addNumber(i);
    }

    Span    b(a);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    d->addNumber(7);
    d->addNumber(10);
    d->addNumber(1);
    d->addNumber(3);

    std::cout << "d : " << *d << std::endl;
    (*d).shortestSpan();
    (*d).longestSpan();
    std::cout << "d : " << *d << std::endl;
    d->fillList();
    std::cout << "d : " << *d << std::endl;

    delete (d);
}

