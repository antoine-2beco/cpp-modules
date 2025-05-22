/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/22 13:44:19 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <iomanip>

# define DATA_FILE_NAME "data.csv"

class BitcoinExchange {

    std::map<std::string, float>    _data;

    std::pair<std::string, float>   getData( const std::string &content );
    void        readData();

    public:
        BitcoinExchange();
        BitcoinExchange( const BitcoinExchange &cpy );
        BitcoinExchange& operator=( const  BitcoinExchange &cpy );
        ~BitcoinExchange();

        void    run( const std::string &dataFile );
};

#endif

