/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:04:13 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:05:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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


	Form contract("contract", 75);
	//Form contract2("contract2", 0);
	Form contract3("contract3", 75, 75);

	std::cout << contract;
	std::cout << contract3;
	std::cout << std::endl;

	c.signForm(contract);
	b.signForm(contract);
	std::cout << std::endl;

	std::cout << contract;
	std::cout << contract3;
}