/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:47 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/03 10:58:28 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << "Default Cat constructor called." << std::endl;
    try {
    _brain = new Brain();
    }
    catch ( const std::bad_alloc& e ) {
        std::cout << "Error : Memory Allocation failed : " << e.what() << std::endl;
    }
}

Cat::Cat( const Cat& cpy ) : Animal(cpy) {
    std::cout << "Cat copy constructor called." << std::endl;
    *this = cpy;
}

Cat& Cat::operator=( const Cat& cpy) {
    std::cout << "Cat copy assignement called." << std::endl;
    if (this != &cpy)
        _type = cpy._type;
        try {
            _brain = new Brain(cpy._brain);
        }
        catch ( const std::bad_alloc& e ) {
            std::cout << "Error : Memory Allocation failed : " << e.what() << std::endl;
        }
    return *this;
}

Cat::~Cat() {
    delete (_brain);
    std::cout << "Cat destructor called." << std::endl;
}

const std::string	Cat::getType() const {
    return _type;
}

const void    Cat::makeSound() const {
    std::cout << "Miaouuu Miaouuu !" << std::endl;
}