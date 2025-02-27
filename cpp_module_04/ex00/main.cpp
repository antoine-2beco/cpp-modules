/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:06:33 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/27 12:54:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main() {
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    // Animal* meta_cpy = new Animal(meta);
    // Animal* j_cpy = new Dog(j);
    // Animal* i_cpy = new Cat(i);

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
}