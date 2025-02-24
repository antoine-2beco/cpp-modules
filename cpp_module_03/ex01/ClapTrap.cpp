/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:27:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 15:42:26 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no more energy points." << std::endl;
	else {
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks ClapTrap " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
	else {
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " has been attacked." << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no more energy points." << std::endl;
	else {
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself, winning " << amount << " hit points." << std::endl;
	}
}
