/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:33:30 by ade-beco          #+#    #+#             */
/*   Updated: 2024/11/22 12:17:03 by ade-beco         ###   ########.fr       */
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
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		;
		else if (input == "SEARCH")
		;
		else if (input == "EXIT")
		{
			std::cout << "See you !" << std::endl;
			return (0) ;
		}
		else
			std::cout << "Bad entry !" << std::endl;
	}
}
