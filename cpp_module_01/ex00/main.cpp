/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:12:18 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/03 16:26:48 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    std::string name;

    std::cout << "Creating zombie on the stack." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie zombi1(name);
	std::cout << std::endl;
    
	std::cout << std::endl;
    std::cout << "Creating zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    zombi2->announce();
    delete zombi2;
	std::cout << std::endl;
	
	std::cout << std::endl;
    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randi");
	std::cout << std::endl;
    return 0;
}