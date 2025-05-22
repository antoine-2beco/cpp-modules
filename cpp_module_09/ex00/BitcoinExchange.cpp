/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:45 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/22 13:44:35 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &cpy ) {
    *this = cpy;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange &cpy ) {
    (void) cpy;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

std::pair<std::string, float>   BitcoinExchange::getData( const std::string &content ) {
    std::pair<std::string, float>  line;
    std::string                     date;
    float                          value;
    char                            *endptr;
    int                             pos;

    pos = content.find(',');
    date = content.substr(0, pos);
    value = std::strtof(content.substr(pos + 1, content.length()).c_str(), &endptr);
    line = std::make_pair(date, value);
    return (line);
}

void BitcoinExchange::readData() {
    std::ifstream   ifs(DATA_FILE_NAME);
    std::string     content;

    if (ifs.is_open()) {
        if (!getline(ifs, content, '\n')) {
            std::cerr << "error : data.csv file is empty" << std::endl;
            ifs.close();
            exit(EXIT_FAILURE);
        }
        while (getline(ifs, content, '\n')) {
            _data.insert(getData(content));
        }
    }
    else {
        std::cerr << "error : opening data.csv file failed" << std::endl;
        exit(EXIT_FAILURE);
    }
    ifs.close();
}

void    BitcoinExchange::run( const std::string &dataFile ) {
    readData();
    (void)dataFile;
}

