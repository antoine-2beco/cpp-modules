/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/08 12:59:41 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>

class BitcoinExchange {

    std::map<std::string, std::string>    _data;

    void    readData( const std::string &dataFile );

    public:
        BitcoinExchange();
        BitcoinExchange( const BitcoinExchange &cpy );
        BitcoinExchange& operator=( const  BitcoinExchange &cpy );
        ~BitcoinExchange();

        void    run( const std::string &dataFile );
};

#endif

