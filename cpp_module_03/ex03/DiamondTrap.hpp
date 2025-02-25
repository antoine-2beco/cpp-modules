/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:58 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/25 15:06:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {

	DiamondTrap();
	std::string	_name;

	public :
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap& operator=( const DiamondTrap& other);
		~DiamondTrap();
	
		using	ScavTrap::attack;
		void	whoAmI( void );

};

#endif