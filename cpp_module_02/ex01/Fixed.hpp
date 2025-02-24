/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:20:01 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 16:22:42 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;
	
	public :
		Fixed (/* args */);
		Fixed ( const int n );
		Fixed ( const float n );
		Fixed ( const Fixed &other );
		Fixed	&operator=( const Fixed &other );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;


};

std::ostream	&operator<<( std::ostream &os, Fixed const &n );

#endif