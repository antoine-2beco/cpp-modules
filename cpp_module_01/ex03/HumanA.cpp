/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:12:02 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 15:07:18 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << this->name << " has been constructed !" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " has been destructed !" << std::endl;
}

void	HumanA::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
	std::cout << this->name << " has a new weapon " << this->weapon->getType() << std::endl;
}


void	HumanA::attack( void ) const
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}
