/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:12:15 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 15:04:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>

# include "Weapon.hpp"

class HumanA
{
	private :
		std::string	name;
		Weapon*		weapon;
		
	public :
		HumanA( std::string name, Weapon &weapon );
		~HumanA();

		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;
};

#endif