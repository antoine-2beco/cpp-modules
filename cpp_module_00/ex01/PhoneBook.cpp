/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:53:35 by ade-beco          #+#    #+#             */
/*   Updated: 2024/11/26 12:08:59 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook Constructed !" << std::endl;
	this->used = 0;
}

void	PhoneBook::show_menu(void)
{
	std::cout << "----------- Welcome in your Phone Book ! -----------" << std::endl;
	std::cout << "----- Enter your choice [ADD - SEARCH - EXIT]: -----" << std::endl;
}

void	PhoneBook::add_contact()
{
	std::string	inputs[5];
	int			index;

	if (this->used == 8)
		index = 8;
	else
		index = this->used++;
	this->get_informations(index);
}

void	PhoneBook::get_informations(int index)
{
	std::string	inputs[5];

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << this->contacts[index].fields_name[i] << " : ";
		std::getline(std::cin, inputs[i]);
		if (inputs[i].empty())
		{
			std::cout << "No entry ! Contact isn't added !" << std::endl;
			return ;
		}
	}
	PhoneBook::contacts[index].set_informations(inputs, index);
}