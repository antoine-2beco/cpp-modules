/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:26:41 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/09 14:14:06 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << &var << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << var << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
