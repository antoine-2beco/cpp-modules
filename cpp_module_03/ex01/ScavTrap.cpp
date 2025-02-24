/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:43:16 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 16:20:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Default destructor called." << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << " has no more energy points." << std::endl;
	else {
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}
