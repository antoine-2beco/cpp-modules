/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:51:09 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/26 11:22:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	d.attack("Alphonse");
	d.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	DiamondTrap e("Estelle");
	std::cout << std::endl;
	DiamondTrap h(e);
	std::cout << std::endl;
	DiamondTrap i;
	e.attack("Alphonse");
	h.attack("Alphonse");
	i.attack("Alphonse");
	e.whoAmI();
	h.whoAmI();
	i.whoAmI();
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
