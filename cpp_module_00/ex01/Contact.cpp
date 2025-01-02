/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:10:54 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/02 12:04:29 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
}

void	Contact::set_informations(std::string inputs[5], int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
		this->informations[i] = inputs[i];
	std::cout << "Contact added !" << std::endl;
}

void	Contact::display_contact_header()
{
	std::cout << "|" << std::setw(10) << this->index + 1;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::display_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->fields_name[i] << " : ";
		std::cout << this->informations[i] << std::endl;
	}
}