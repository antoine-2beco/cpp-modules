/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:49:17 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 12:07:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie has been constructed !" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed !" << std::endl;
}

void	Zombie::set_name( std::string name )
{
	this->name = name;
	std::cout << this->name << " has been renamed !" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
