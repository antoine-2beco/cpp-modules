/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:54:26 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/22 13:45:38 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    BitcoinExchange btc;

    if (argc != 2) {
        std::cerr << "error : bad argument" << std::endl;
        exit(EXIT_FAILURE);
    }
    btc.run(argv[1]);
}

