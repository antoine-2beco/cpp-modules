/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:27:02 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 15:28:31 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	
	public :
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		ClapTrap& operator= ( const ClapTrap& other );
		~ClapTrap();
		
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};


#endif