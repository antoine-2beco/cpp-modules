/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:48:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 12:10:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	zombieHorde( int n, std::string name )
{
	if (n > 0 && n < INT32_MAX)
	{
		Zombie *horde = new Zombie[n];

		for (int i = 0; i < n; i++)
			horde[i].set_name(name);
		return (horde);
	}
	return (NULL);
}
