/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:53:35 by ade-beco          #+#    #+#             */
/*   Updated: 2024/12/31 16:54:09 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
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

	for (int i = 0; i < 5; i++)
	{
		std::cout << this->contacts[index].fields_name[i] << " : ";
		std::getline(std::cin, inputs[i]);
		if (inputs[i].empty())
		{
			std::cout << "No entry ! Contact isn't added !" << std::endl;
			this->used--;
			return ;
		}
	}
	PhoneBook::contacts[index].set_informations(inputs, index + 1);
}

void	PhoneBook::display_search_header()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->used; i++)
		this->contacts[i].display_contact_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::search_contact()
{
	int	index;
	
	if (this->used == 0)
	{
		std::cout << "No contact added !" << std::endl;
		return ;
	}
	this->display_search_header();
	std::cout << "Enter the index of the contact you search : ";
	std::cin >> index;
	
	if (index < 0 || index > this->used)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid  index !" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (index > 0)
		this->contacts[index - 1].display_contact();
}
