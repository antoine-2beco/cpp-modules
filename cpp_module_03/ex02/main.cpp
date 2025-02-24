/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:51:09 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 17:03:53 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void ) {
	ClapTrap a("Alphonse");
	ClapTrap b("Brieuc");

	a.attack("Brieuc");
	b.takeDamage(7);

	b.attack("Alphonse");
	a.takeDamage(9);

	a.beRepaired(5);
	b.attack("Alphonse");
	a.takeDamage(9);

	a.beRepaired(5);
	b.attack("Alphonse");
	a.takeDamage(9);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap c("Emile");
	c.attack("Alphonse");
	c.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap d("Elisa");
	d.attack("Alphonse");
	d.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
