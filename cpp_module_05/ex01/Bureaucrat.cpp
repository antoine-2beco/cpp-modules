/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:36:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/06 14:00:57 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& cpy ) : _name(cpy.getName()) {
	*this = cpy;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& cpy ) {
	if (this != &cpy) {
		_grade = cpy.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string	Bureaucrat::getName() const {
	return _name;
}

const int			Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm( Form& form ) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName();
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << getName() << " couldn't sign " << form.getName() << "because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<( std::ostream& o, const Bureaucrat& src ) {
	std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}
