/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:45:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/03 11:20:38 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain( const Brain& cpy ) {
    std::cout << "Brain copy constructor called." << std::endl;
	*this = cpy;
}

Brain& Brain::operator=( const Brain& cpy) {
    std::cout << "Brain copy assignement called." << std::endl;
	if (this != &cpy) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = cpy._ideas[i];
	}
	return *this;
}

Brain::~Brain() {
    std::cout << "Brain default destructor called." << std::endl;
}
