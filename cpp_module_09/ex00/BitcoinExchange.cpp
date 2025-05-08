/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:45 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/08 11:56:45 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &cpy ) {
    *this = cpy;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange &cpy ) {
    if ( this != &cpy )
        ;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

