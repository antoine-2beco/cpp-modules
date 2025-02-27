/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:47 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/27 12:48:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog( const Dog& cpy ) : Animal(cpy) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = cpy;
}

Dog& Dog::operator=( const Dog& cpy) {
    std::cout << "Dog copy assignement called." << std::endl;
    if (this != &cpy)
        _type = cpy._type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called." << std::endl;
}

const std::string	Dog::getType() const {
    return _type;
}

void    Dog::makeSound() {
    std::cout << "Ouaf Ouaf !" << std::endl;
}