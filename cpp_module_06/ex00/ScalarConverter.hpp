/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:17:23 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/13 14:37:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

enum type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class ScalarConverter {
	
	ScalarConverter();
	ScalarConverter( const ScalarConverter& cpy );
	ScalarConverter& operator=( const ScalarConverter& cpy );
	~ScalarConverter();
	
	public:
		static void convert( const std::string& str );
};

#endif
