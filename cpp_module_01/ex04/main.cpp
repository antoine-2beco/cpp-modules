/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:30:46 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/13 16:26:51 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int	main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cerr << "Bad usage !" << std::endl;
		return (EXIT_FAILURE);
	}
	else
	{
		SedV2 sedv2(argv[1]);
		sedv2.replace(argv[2], argv[3]);
	}
	return (EXIT_SUCCESS);
}
