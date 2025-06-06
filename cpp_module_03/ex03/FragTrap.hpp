/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:52:21 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/25 16:45:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& other );
		FragTrap& operator=( const FragTrap& other);
		~FragTrap();

		void	highFivesGuys( void );
};

#endif
