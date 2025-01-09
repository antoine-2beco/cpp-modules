/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:14:18 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 14:57:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private :
		std::string	type;
		
	public :
		Weapon( std::string type );
		~Weapon();

		const std::string&	getType( void );
		void				setType( std::string newType );

};

#endif