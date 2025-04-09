/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:55:05 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/09 16:10:51 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <stdexcept>

Base* generate( void ) {
    int randomNum = std::rand() % 3;
    switch (randomNum) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            std::cout << "Error with randomNum" << std::endl;
            return NULL;
    }
}

void identify( Base* p ) {
    A* a = dynamic_cast<A *>(p);
    if (a != NULL) {
        std::cout << "The object pointed by p is of type A." << std::endl;
        return;
    }

    B* b = dynamic_cast<B *>(p);
    if (b != NULL) {
        std::cout << "The object pointed by p is of type B." << std::endl;
        return;
    }

    C* c = dynamic_cast<C *>(p);
    if (c != NULL) {
        std::cout << "The object pointed by p is of type C." << std::endl;
        return;
    }

    std::cout << "Type Error" << std::endl;
}

void identify( Base& p ) {
    try {
        A& a = dynamic_cast<A &>(p);
        std::cout << "The object pointed by p is of type A." << std::endl;
        (void)a;
        return;
    }
    catch (std::exception & e) {
        (void)e;
    }
    try {
        B& b = dynamic_cast<B &>(p);
        std::cout << "The object pointed by p is of type B." << std::endl;
        (void)b;
        return;
    }
    catch (std::exception & e) {
        (void)e;
    }
    try {
        C& c = dynamic_cast<C &>(p);
        std::cout << "The object pointed by p is of type C." << std::endl;
        (void)c;
        return;
    }
    catch (std::exception & e) {
        std::cout << "Type Error" << std::endl;
    }
}

int main(){
    srand(time(NULL));
	
    Base *test = generate();
	if (test)
		identify(test);
	Base *test1 = generate();
	if (test1)
		identify(test1);
	Base *test2 = generate();
	if (test2)
		identify(test2);
	Base *test3 = generate();
	if (test3)
		identify(test3);

	identify(*test);
	identify(*test1);
	identify(*test2);
	identify(*test3);

    std::cout << std::endl;
	delete test;
	delete test1;
	delete test2;
	delete test3;
}

