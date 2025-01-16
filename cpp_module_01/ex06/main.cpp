/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:01 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/16 16:21:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cerr << "Bad usage !" << std::endl;
		return (1);
	}
	harl.complain( argv[1] );
}
