/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:01:46 by ade-beco          #+#    #+#             */
/*   Updated: 2025/07/29 17:38:23 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Error : Bad argument" << std::endl;
        return 1;
    }
    RPN     calculate;
    calculate.expressionProcess(argv[1]);
    return 0;
}

