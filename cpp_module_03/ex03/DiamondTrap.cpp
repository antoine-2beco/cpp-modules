/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:14:25 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 17:26:03 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap Default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Default destructor called." << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
