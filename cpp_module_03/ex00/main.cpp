/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:27:05 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/26 11:08:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void ) {
	ClapTrap a("Alphonse");
	ClapTrap b("Brieuc");
	ClapTrap c(b);

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
}