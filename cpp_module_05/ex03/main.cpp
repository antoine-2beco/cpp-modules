/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:56:06 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 18:04:49 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>

int main() {
	Bureaucrat a("a", 1);
	Bureaucrat b("b", 50);
	Bureaucrat c("c", 150);

	Bureaucrat d(c);

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;

	// a.incrementGrade();
	b.incrementGrade();
	c.incrementGrade();

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
	
	a.decrementGrade();
	b.decrementGrade();
	c.decrementGrade();
	// c.decrementGrade();

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;

	ShrubberyCreationForm	s("home");
	RobotomyRequestForm		r("home");
	PresidentialPardonForm	p("home");

	ShrubberyCreationForm	x(s);
	RobotomyRequestForm		y(r);
	PresidentialPardonForm	z(p);

	d.signAForm(s);
	b.signAForm(s);
	c.executeForm(s);
	b.executeForm(s);
	std::cout << std::endl;

	b.signAForm(r);
	b.executeForm(r);
	a.executeForm(r);
	std::cout << std::endl;

	a.signAForm(p);
	a.executeForm(p);
	std::cout << std::endl;

	Intern	someIntern;
	AForm*	internForm;

	internForm = someIntern.makeForm("presidential pardon", "elon");

	a.signAForm(*internForm);
	a.executeForm(*internForm);
}