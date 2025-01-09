/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:46:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 14:33:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private :
		std::string	name;

	public :
		Zombie();
		~Zombie();
		
		void		set_name( std::string name );
		void		announce( void );
};

Zombie*	zombieHorde( int n, std::string name );

#endif