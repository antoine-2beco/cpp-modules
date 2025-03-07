/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:56:06 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 15:01:57 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main() {
	Bureaucrat a("a", 1);
	Bureaucrat b("b", 50);
	Bureaucrat c("c", 150);

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
}