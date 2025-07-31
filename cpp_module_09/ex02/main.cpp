/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:48 by ade-beco          #+#    #+#             */
/*   Updated: 2025/07/31 17:28:24 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char *argv[] ) {
    for ( int i = 1; i < argc; i++) {
        for (unsigned int j = 0; j < strlen(argv[i]); j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                std::cerr << "Error : bad argument : only digits : " << argv[i][j] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        for ( int k = 1; k < argc; k++) {
            if ( i != k && strcmp(argv[i], argv[k]) == 0 ) {
                std::cerr << "Error : bad argument : same number : " << argv[i] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
    }
}

