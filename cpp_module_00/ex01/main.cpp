/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:33:30 by ade-beco          #+#    #+#             */
/*   Updated: 2024/12/31 16:41:45 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	
	phonebook.show_menu();
	while (true)
	{
		std::cout << "/> ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
		{
			std::cout << "See you !" << std::endl;
			return (0) ;
		}
		else
			std::cout << "Bad entry !" << std::endl;
	}

	return (0);
}
