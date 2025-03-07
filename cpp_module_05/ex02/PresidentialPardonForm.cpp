/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:34:55 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:54:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cpy ) : AForm( cpy ), _target(cpy.getTarget()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& cpy ) {
	(void)cpy;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string	PresidentialPardonForm::getTarget() const {
	return _target;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	;
}