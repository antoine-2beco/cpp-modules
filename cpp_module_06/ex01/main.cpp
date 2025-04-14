/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:42:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/14 11:23:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data test;
    test.firstLetter = 'a';
    test.age = 19;

    std::cout << "Test first lettre is " << test.firstLetter << " and age is " << test.age << std::endl;

    uintptr_t test1 = Serializer::serialize(&test);

    std::cout << "Serialize test is " << test1 << std::endl;

    Data* test2 = Serializer::deserialize(test1);

    std::cout << "Deserialize Test first lettre is " << test2->firstLetter << " and age is " << test2->age << std::endl;
}

