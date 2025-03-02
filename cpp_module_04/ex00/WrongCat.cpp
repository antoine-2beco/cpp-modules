/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:55:43 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/02 17:56:40 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& cpy ) : WrongAnimal(cpy) {
    std::cout << "WrongCat copy constructor called." << std::endl;
    *this = cpy;
}

WrongCat& WrongCat::operator=( const WrongCat& cpy) {
    std::cout << "WrongCat copy assignement called." << std::endl;
    if (this != &cpy)
        _type = cpy._type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called." << std::endl;
}

const std::string	WrongCat::getType() const {
    return _type;
}

const void    WrongCat::makeSound() const {
    std::cout << "Miaouuu Miaouuu !" << std::endl;
}