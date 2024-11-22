/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:52:35 by ade-beco          #+#    #+#             */
/*   Updated: 2024/11/22 12:10:49 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{

	private :
		int					index;
		static std::string	fields_name[5];
		enum				Fields{
			FirstName,
			LastName,
			Nickname,
			PhoneNumber,
			DarkestSecret,
		};

	public : 
		Contact();
		
} ;

#endif
