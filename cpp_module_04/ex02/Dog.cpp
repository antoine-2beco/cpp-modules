/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:47 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/03 11:24:43 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << "Default Dog constructor called." << std::endl;
    try {
    _brain = new Brain();
    }
    catch ( const std::bad_alloc& e ) {
        std::cout << "Error : Memory Allocation failed : " << e.what() << std::endl;
    }
}

Dog::Dog( const Dog& cpy ) : Animal(cpy) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = cpy;
}

Dog& Dog::operator=( const Dog& cpy) {
    std::cout << "Dog copy assignement called." << std::endl;
    if (this != &cpy) {
        _type = cpy._type;
        try {
            _brain = new Brain( *cpy._brain );
        }
        catch ( const std::bad_alloc& e ) {
            std::cout << "Error : Memory Allocation failed : " << e.what() << std::endl;
        }
    }
    return *this;
}

Dog::~Dog() {
    delete (_brain);
    std::cout << "Dog destructor called." << std::endl;
}

const std::string	Dog::getType() const {
    return _type;
}

const void    Dog::makeSound() const {
    std::cout << "Ouaf Ouaf !" << std::endl;
}