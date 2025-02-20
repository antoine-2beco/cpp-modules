/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:19:56 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/03 10:25:36 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedpoint_Value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : fixedpoint_Value(n << fractional_Bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : fixedpoint_Value(std::roundf(n * (1 << fractional_Bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixedpoint_Value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return (this->fixedpoint_Value);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedpoint_Value = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>( this->getRawBits() ) / ( 1 << fractional_Bits ));
}

int		Fixed::toInt( void ) const
{
	return (this->fixedpoint_Value >> fractional_Bits);
}

std::ostream& operator<<( std::ostream& os, Fixed const& n )
{
	os << n.toFloat();
	return os;
}
