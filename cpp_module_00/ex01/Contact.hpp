/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:52:35 by ade-beco          #+#    #+#             */
/*   Updated: 2024/12/31 16:21:41 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{

	private :
		int					index;
		std::string			informations[5];

	public : 
		Contact();
		static std::string	fields_name[5];
		
		void	set_informations(std::string inputs[5], int index);
		void	display_contact_header();
		void	display_contact();


		
} ;

#endif
