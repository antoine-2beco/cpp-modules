/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:55:13 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/20 12:22:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 15

int	main( void )
{
	Zombie *horde = zombieHorde(N, "foo");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}