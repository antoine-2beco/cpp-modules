/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:34:55 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:54:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& cpy ) : AForm( cpy ), _target(cpy.getTarget()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& cpy ) {
	(void)cpy;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string	ShrubberyCreationForm::getTarget() const {
	return _target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	;
}