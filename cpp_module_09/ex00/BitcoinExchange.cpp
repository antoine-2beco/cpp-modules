/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:45 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/22 16:14:18 by ade-beco         ###   ########.fr       */
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
    std::string s_year = date.substr(0, 3);
    std::string s_month = date.substr(5, 6);
    std::string s_day = date.substr(8, 9);
    char        *endptr;

    if (!isAllDigits(s_year) && !isAllDigits(s_month) && !isAllDigits(s_day)) {
        std::cerr << "Error : bad input => " << date << std::endl;
        return (1);
    }

    int     year = strtol(s_year.c_str(), &endptr, 10);
    int     month = strtol(s_month.c_str(), &endptr, 10);
    int     day = strtol(s_day.c_str(), &endptr, 10);
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
            days = 29;
            if ((year % 400 ==0) && (year % 100 == 0) && (year % 400 == 0))
                days = 28;
            break;
    }
    if (day > days) {
        std::cerr << "Error : bad input => " << date << std::endl;
        return (1);
    }
    return (0);
}

int     BitcoinExchange::validValue( const std::string &s_value ) {
    int     value;
    char    *endptr;

    if (!isAllDigits(value)) {
        std::cerr << "Error : bad input => " << value << std::endl;
        return (1);
    }
    value = std::strtol(value, &endptr, 10);
    if (value < 0) {
        std::cerr << "Error : not a positive number => " << s_value << std::endl;
        return (1);
    }
    if (value > 1000) {
        std::cerr << "Error : too large number => " << s_value << std::endl;
        return (1);
    }
    return 0;
}

void    BitcoinExchange::processLine( const std::string &line ) {
    std::string     date;
    std::string     s_value;
    int             pos;

    pos = line.find(" | ");
    if (pos == static_cast<int>(std::string::npos)) {
        std::cerr << "Error : bad input => " << line << std::endl;
        return;
    }
    date = line.substr(0, pos);
    s_value = line.substr(pos + 3, line.length());

    if (validDate(date) || validValue(s_value))
        return;
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

