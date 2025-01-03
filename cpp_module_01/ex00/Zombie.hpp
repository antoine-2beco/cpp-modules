/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:46:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/03 16:20:31 by ade-beco         ###   ########.fr       */
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
		Zombie( std::string name );
		~Zombie();
		
		void		announce( void );
};

Zombie* 	newZombie( std::string name );
void 		randomChump( std::string name );

#endif