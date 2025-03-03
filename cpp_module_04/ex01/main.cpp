/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:06:33 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/03 11:26:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

#define TAB_SIZE 4

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete(meta);
    delete(j);
    delete(i);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* WrongI = new WrongCat();

    std::cout << WrongI->getType() << " " << std::endl;
    WrongI->makeSound();
    wrongMeta->makeSound();
    delete(WrongI);
    delete(wrongMeta);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

	const Animal*	tab[TAB_SIZE];

    for (int i = 0; i < TAB_SIZE; i++) {
        if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
    }

	std::cout << std::endl;

	for (int i = 0; i < TAB_SIZE; i++) {
		delete tab[i];
	}
}