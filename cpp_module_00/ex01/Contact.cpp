/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:10:54 by ade-beco          #+#    #+#             */
/*   Updated: 2024/11/26 12:13:07 by ade-beco         ###   ########.fr       */
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

Contact::Contact(){
	std::cout << "Contact Constructed !" << std::endl;
}

void	Contact::set_informations(std::string inputs[5], int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
		this->informations[i] = inputs[i];
	std::cout << "Contact added !" << std::endl;
}