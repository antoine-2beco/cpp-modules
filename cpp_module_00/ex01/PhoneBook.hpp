/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:52:26 by ade-beco          #+#    #+#             */
/*   Updated: 2024/12/31 16:21:53 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{

	private :
		Contact	contacts[8];
		int		used;

	public :
		PhoneBook();
		void	show_menu(void);
		
		void	add_contact(void);
		void	get_informations(int index);
		
		void	display_search_header();
		void	search_contact();



};

#endif