/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:51:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/25 16:41:15 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public :
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );
		ScavTrap& operator=( const ScavTrap& other );
		~ScavTrap();
		
		void	attack( std::string const& target );
		void	guardGate();
};

#endif
