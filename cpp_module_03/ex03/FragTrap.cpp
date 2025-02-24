/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:54:58 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 17:02:30 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default constructor called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Default destructor called." << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap sent a positive high fives request !" << std::endl;
}
