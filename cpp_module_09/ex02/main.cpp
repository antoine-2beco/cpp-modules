/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:48 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/13 17:48:35 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeCore.hpp"
#include "PmergeMeVector.hpp"
#include "PmergeMeDeque.hpp"

int main( int argc, char *argv[] ) {
    if (argc == 1) {
        std::cerr << "Error : no argument" << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++) {
        for (unsigned int j = 0; j < strlen(argv[i]); j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                std::cerr << "Error : bad argument : only digits : " << argv[i][j] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        for (int k = 1; k < argc; k++) {
            char    *endptr;
            std::string iNum = argv[i];
            std::string kNum = argv[k];
            if ( i != k && strtoll(iNum.c_str(), &endptr, 10) == strtoll(kNum.c_str(), &endptr,  10) ) {
                std::cerr << "Error : bad argument : same numbers : " << argv[i] << " == " << argv[k] << std::endl;
                exit(EXIT_FAILURE);
            }
        }
    }
    return 0;
}

