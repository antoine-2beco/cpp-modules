/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:12:32 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/07 15:33:01 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main() {
    MutantStack<int>    stack;
    std::list<int>      list;

    stack.push(7);
    stack.push(15);
    stack.push(1513);

    list.push_back(7);
    list.push_back(15);
    list.push_back(1513);

    std::cout << "top of stack : " << stack.top() << std::endl;
    std::cout << "back of list : " << list.back()  << std::endl;

    std::cout << "pop_back of stack and list" << std::endl;
    stack.pop();
    list.pop_back();

    std::cout << "size of stack : " << stack.size() << std::endl;
    std::cout << "size of list : " << list.size() << std::endl;

    stack.push(9);
    stack.push(99);
    stack.push(12);
    stack.push(877);
    stack.push(1000);

    list.push_back(9);
    list.push_back(99);
    list.push_back(12);
    list.push_back(877);
    list.push_back(1000);

    for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;

    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}
