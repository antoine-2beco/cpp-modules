/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:13:50 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 12:02:24 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <set>
#include <list>
#include <deque>
#include <vector>


int main() {

    std::set<int>       set;
    std::list<int>      list;
    std::deque<int>     deq;
    std::vector<int>    vec;

    for (int i = 0; i < 10; i++) {
        set.insert(i);
        list.push_back(i);
        deq.push_front(i);
        vec.push_back(i);
    }

    std::cout << "Test with set : ";
    for (std::set<int>::iterator it = set.begin(); it != set.end(); it++)
        std::cout << " " << *it;


    std::set<int>::iterator    set_it = easyfind(set, 3);
    std::cout << std::endl << " Found : " << *set_it << " followed by " << *(++set_it) << std::endl;

    std::cout << "Test with list : ";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << " " << *it;

    std::list<int>::iterator    list_it = easyfind(list, 7);
    std::cout << std::endl << " Found : " << *list_it << " followed by " << *(++list_it) << std::endl;

    std::cout << "Test with deque : ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
        std::cout << " " << *it;

    std::deque<int>::iterator    deq_it = easyfind(deq, 4);
    std::cout << std::endl << " Found : " << *deq_it << " followed by " << *(++deq_it) << std::endl;

    std::cout << "Test with vector : ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << " " << *it;

    std::vector<int>::iterator    vec_it = easyfind(vec, 9);
    std::cout << std::endl << " Found : " << *vec_it << " followed by " << *(++vec_it) << std::endl;

    std::cout << "Test with vector : ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << " " << *it;

    std::vector<int>::iterator    vec_it_f = easyfind(vec, 42);
    std::cout << std::endl << " Is 42 in the vector ? " << (vec_it_f != vec.end() ? "yes" : "no") << std::endl;
}

