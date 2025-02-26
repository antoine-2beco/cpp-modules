/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:35:01 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/26 11:14:34 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap d(c);
	ScavTrap e;
	c.attack("Alphonse");
	d.attack("Alphonse");
	c.guardGate();
	d.guardGate();
}
