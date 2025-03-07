/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:59 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:56:04 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

AForm::AForm( const std::string name, int gradeToSign ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(150) {
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& cpy ) : _name(cpy.getName()), _gradeToSign(cpy.getGradeToSign()), _gradeToExecute(cpy.getGradeToExecute()) {
	*this = cpy;
}

AForm& AForm::operator=( const AForm& cpy ) {
	if (this != &cpy) {
		_signed = cpy.getSigned();
	}
	return *this;
}

AForm::~AForm() {}

const std::string	AForm::getName() const {
	return _name;
}

const bool			AForm::getSigned() const {
	return _signed;
}

const int			AForm::getGradeToSign() const {
	return _gradeToSign;
}

const int			AForm::getGradeToExecute() const {
	return _gradeToExecute;
}

void				AForm::beSigned( const Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > getGradeToSign())
		throw AForm::GradeTooLowException();
	_signed = true;
}


std::ostream&	operator<<( std::ostream& o, const AForm& src ) {
	std::cout << src.getName() << " : signed = " << src.getSigned() \
		<< ", grade to sign = " << src.getGradeToSign() \
		<< ", grade to execute = " << src.getGradeToExecute() << std::endl;
	return o;
}
