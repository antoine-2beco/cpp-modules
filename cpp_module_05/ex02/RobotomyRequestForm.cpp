/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:44 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:59:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& cpy ) : AForm( cpy ), _target(cpy.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& cpy ) {
	(void)cpy;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string	RobotomyRequestForm::getTarget() const {
	return _target;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	;
}