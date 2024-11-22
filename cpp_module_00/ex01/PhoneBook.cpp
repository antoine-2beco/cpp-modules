/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:53:35 by ade-beco          #+#    #+#             */
/*   Updated: 2024/11/22 12:07:20 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(){
	std::cout << "PhoneBook Constructed !" << std::endl;
	this->used = 0;
}

void	PhoneBook::show_menu(void){
	std::cout << "----------- Welcome in your Phone Book ! -----------" << std::endl;
	std::cout << "----- Enter your choice [ADD - SEARCH - EXIT]: -----" << std::endl;
	std::cout << "# ";
}