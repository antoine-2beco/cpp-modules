/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:20:01 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/31 16:20:02 by ade-beco         ###   ########.fr       */
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
		Fixed (const Fixed &other);
		Fixed& operator=( const Fixed &other);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
};

#endif