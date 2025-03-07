/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:04:03 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:05:25 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

Form::Form( const std::string name, int gradeToSign ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(150) {
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form& cpy ) : _name(cpy.getName()), _gradeToSign(cpy.getGradeToSign()), _gradeToExecute(cpy.getGradeToExecute()) {
	*this = cpy;
}

Form& Form::operator=( const Form& cpy ) {
	if (this != &cpy) {
		_signed = cpy.getSigned();
	}
	return *this;
}

Form::~Form() {}

const std::string	Form::getName() const {
	return _name;
}

const bool			Form::getSigned() const {
	return _signed;
}

const int			Form::getGradeToSign() const {
	return _gradeToSign;
}

const int			Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void				Form::beSigned( const Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > getGradeToSign())
		throw Form::GradeTooLowException();
	_signed = true;
}


std::ostream&	operator<<( std::ostream& o, const Form& src ) {
	std::cout << src.getName() << " : signed = " << src.getSigned() \
		<< ", grade to sign = " << src.getGradeToSign() \
		<< ", grade to execute = " << src.getGradeToExecute() << std::endl;
	return o;
}
