/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:12:27 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 15:07:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->name = name;
	std::cout << this->name << " has been constructed !" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " has been destructed !" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
	std::cout << this->name << " has a new weapon " << this->weapon->getType() << std::endl;
}

void	HumanB::attack( void ) const
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}