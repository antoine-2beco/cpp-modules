/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:47 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/27 12:07:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : _type("No Type") {
    std::cout << "Default Animal w.p. constructor called." << std::endl;
}

Animal::Animal( std::string& type ) : _type(type) {
    std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal( const Animal& cpy ) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = cpy;
}

Animal::Animal& operator=( const Animal& cpy) {
    std::cout << "Animal copy assignement called." << std::endl;
    if (this != &other)
        _type = cpy.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}
