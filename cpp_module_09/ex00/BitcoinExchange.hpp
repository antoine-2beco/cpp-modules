/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:47:57 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/08 11:51:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>

class BitcoinExchange {
    
    public:
        BitcoinExchange();
        BitcoinExchange( const BitcoinExchange &cpy );
        BitcoinExchange& operator=( const  BitcoinExchange &cpy );
        ~BitcoinExchange();
};


#endif
