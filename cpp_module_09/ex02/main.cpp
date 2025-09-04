/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:48 by ade-beco          #+#    #+#             */
/*   Updated: 2025/09/04 12:18:05 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeCore.hpp"
#include "PmergeMeVector.hpp"
#include "PmergeMeDeque.hpp"

int main( int argc, char *argv[] ) {

    PmergeMeVector  algoVector;
    std::vector<int>    ret = algoVector.run(argc, argv);

    algoVector.printBefore();
    algoVector.printAfter();
    algoVector.printTime();

    for ( std::vector<int>::iterator it = ret.begin(); it + 1 != ret.end(); it++ )
            if (*it > *(it + 1))
                std::cout << "Not sorted : " << *it << " > " << *(it + 1) << std::endl;

    PmergeMeDeque  algoDeque;
    algoDeque.run(argc, argv);
    algoDeque.printTime();

    return 0;
}
