/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:12:39 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 15:03:56 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>

# include "Weapon.hpp"

class HumanB
{
	private :
		std::string	name;
		Weapon*		weapon;

	public :
		HumanB( std::string name );
		~HumanB();

		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;
};

#endif