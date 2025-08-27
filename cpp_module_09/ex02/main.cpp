/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:48 by ade-beco          #+#    #+#             */
/*   Updated: 2025/08/27 16:45:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMeCore.hpp"
#include "PmergeMeVector.hpp"
#include "PmergeMeDeque.hpp"

int main( int argc, char *argv[] ) {

    PmergeMeVector  algoVector;
    algoVector.run(argc, argv);

    algoVector.printBefore();
    algoVector.printAfter();
    algoVector.printTime();

    return 0;
}

