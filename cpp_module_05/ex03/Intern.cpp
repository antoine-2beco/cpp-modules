/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:50:35 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 18:04:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& cpy ) {}

Intern& Intern::operator=( const Intern& cpy ) { return *this; }

Intern::~Intern() {}

AForm*	Intern::makeForm( std::string type, std::string target ) {
	std::string	formNames[] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	AForm*		formFunctions[] = {
		new PresidentialPardonForm( target ),
		new RobotomyRequestForm( target ),
		new ShrubberyCreationForm( target )
	};

	for (int i = 0; i < 3; i++) {
		if (type == formNames[i]) {
			std::cout << "Intern creates " << type << std::endl;
			return formFunctions[i];
		}
	}
	std::cout << "Intern cannot create form " << type << std::endl;
	return nullptr;
}
