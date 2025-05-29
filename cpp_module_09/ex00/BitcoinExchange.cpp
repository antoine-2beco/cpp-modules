/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:45 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/29 14:16:01 by ade-beco         ###   ########.fr       */
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
    std::pair<std::string, float>   line;
    std::string                     date;
    float                           value;
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

int  BitcoinExchange::isAllDigits(const std::string &s ) {
    for (long unsigned int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9')
            return (1);
    }
    return (0);
}

int     BitcoinExchange::validDate( const std::string &date ) {
    char        *endptr;
    int         nbMinus = 0;

    for (long unsigned int i = 0; i < date.length(); i++) {
        if (date[i] == '-')
            nbMinus++;
        else if (date[i] < '0' || date[i] > '9') {
            std::cerr << "Error : bad input => " << date << std::endl;
            return (1);
        }
    }
    if (date.length() != 10 || nbMinus != 2) {
        std::cerr << "Error : bad input => " << date << std::endl;
        return (1);
    }

    int     year = strtol(date.substr(0, 4).c_str(), &endptr, 10);
    int     month = strtol(date.substr(5, 6).c_str(), &endptr, 10);
    int     day = strtol(date.substr(8, 9).c_str(), &endptr, 10);
    int     days;

    if (month < 1 || month > 12) {
        std::cerr << "Error : bad input => " << date << std::endl;
        return (1);
    }

    switch (month) {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            days = 31;
            break;
        case 4 : case 6 : case 9 : case 11 :
            days = 30;
            break;
        case 2 :
            days = 28;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            break;
    }
    if (day > days) {
        std::cerr << "Error : bad input => " << date << std::endl;
        return (1);
    }
    return (0);
}

int     BitcoinExchange::validValue( const std::string &s_value ) {
    long long   value;
    char        *endptr;
    int         nbPoint = 0;

    for (long unsigned int i = 0; i < s_value.length(); i++) {
        if (s_value[i] == '-') {
            std::cerr << "Error : not a positive number => " << s_value << std::endl;
            return (1);
        }
        else if (s_value[i] == '.')
            nbPoint++;
        else if (s_value[i] < '0' || s_value[i] > '9') {
            std::cerr << "Error : bad input => " << s_value << std::endl;
            return (1);
        }
    }
    if (nbPoint > 1) {
        std::cerr << "Error : bad input => " << s_value << std::endl;
        return (1);
    }
    value = std::strtoll(s_value.c_str(), &endptr, 10);
    if (value > 1000) {
        std::cerr << "Error : too large number => " << s_value << std::endl;
        return (1);
    }
    return (0);
}

void    BitcoinExchange::processLine( const std::string &line ) {
    std::string     date;
    std::string     s_value;
    double          value;
    int             pos;
    char            *endptr;

    pos = line.find(" | ");
    if (pos == static_cast<int>(std::string::npos)) {
        std::cerr << "Error : bad input => " << line << std::endl;
        return;
    }
    date = line.substr(0, pos);
    s_value = line.substr(pos + 3, line.length());

    if (validDate(date) || validValue(s_value))
        return;

    value = std::strtod(s_value.c_str(), &endptr);

    std::map<std::string, float>::iterator it = _data.lower_bound(date);
    if (it != _data.begin())
        it--;
    std::cout << date << " => " << s_value << " = " << (value * it->second) << " : " << it->second << std::endl;
}

void    BitcoinExchange::run( const std::string &dataFile ) {
    std::ifstream   ifs(dataFile.c_str());
    std::string     content;

    readData();
    if (ifs.is_open()) {
        if (!getline(ifs, content, '\n')) {
            std::cerr << "error : " << dataFile << " file is empty" << std::endl;
            ifs.close();
            exit(EXIT_FAILURE);
        }
        while (getline(ifs, content, '\n')) {
            processLine(content);
        }
    }
    else {
        std::cerr << "error : opening " << dataFile << " file failed" << std::endl;
        exit(EXIT_FAILURE);
    }
    ifs.close();
}

