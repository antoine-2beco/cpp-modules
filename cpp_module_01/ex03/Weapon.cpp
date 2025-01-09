/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:13:51 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 15:10:46 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->setType(type);
	std::cout << "Weapon " << this->type << " has been constructed !" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << this->type << " has been destructed !" << std::endl;
}

const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType( std::string newType )
{
	this->type = newType;
	std::cout << "Weapon has a new type " << this->type << std::endl;
}
