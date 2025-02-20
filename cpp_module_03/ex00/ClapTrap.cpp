/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:27:00 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/20 13:15:16 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " has been constructed !" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << this->_name << " has been copy constructed !" << std::endl;
	return *this;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other){
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << this->_name << " has been destructed !" << std::endl;
}


void	ClapTrap::takeDamage( unsigned int amount ) {
	
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints >= 1) {
		this->_energyPoints--;
		this->_hitPoints =+ amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no more energy points." << std::endl;	
}

