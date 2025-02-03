/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:24 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/03 17:39:37 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int					fixedpoint_Value;
		static const int	fractional_Bits = 8;

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

		bool	operator>( const Fixed &other ) const;
		bool	operator<( const Fixed &other ) const;
		bool	operator>=( const Fixed &other ) const;
		bool	operator<=( const Fixed &other ) const;
		bool	operator==( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;

		Fixed	operator+( const Fixed &other ) const;
		Fixed	operator-( const Fixed &other ) const;
		Fixed	operator*( const Fixed &other ) const;
		Fixed	operator/( const Fixed &other ) const;

		Fixed&	operator++( void ); // prefix
		Fixed	operator++( int ); // postfix
		Fixed&	operator--( void ); // prefix
		Fixed	operator--( int ); // postfix

		static Fixed&		min( Fixed &a, Fixed &b );
    	static const Fixed&	min( const Fixed &a, const Fixed &b );
    	static Fixed&		max( Fixed &a, Fixed &b );
    	static const Fixed&	max( const Fixed &a, const Fixed &b );
};

std::ostream	&operator<<( std::ostream &os, Fixed const &n );

#endif