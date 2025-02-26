/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:51:09 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/26 11:16:16 by ade-beco         ###   ########.fr       */
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
	ScavTrap f(c);
	c.attack("Alphonse");
	c.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap d("Elisa");
	FragTrap g(d);
	std::cout << std::endl;
	FragTrap h;
	d.attack("Alphonse");
	g.attack("Alphonse");
	h.attack("Alphonse");
	d.highFivesGuys();
	g.highFivesGuys();
	h.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
