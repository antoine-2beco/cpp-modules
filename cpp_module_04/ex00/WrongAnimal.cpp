/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:55:54 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/02 17:55:57 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : _type("No Type") {
    std::cout << "Default WrongAnimal constructor w.p. called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
    std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& cpy ) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = cpy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& cpy) {
    std::cout << "WrongAnimal copy assignement called." << std::endl;
    if (this != &cpy)
        _type = cpy._type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called." << std::endl;
}

const std::string	WrongAnimal::getType() const {
    return _type;
}

const void    WrongAnimal::makeSound() const {
    std::cout << "<WrongAnimal sound>" << std::endl;
}
