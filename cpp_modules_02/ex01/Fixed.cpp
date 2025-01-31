/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:19:56 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/31 17:10:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedpoint_Value = 0;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedpoint_Value = n << fractional_Bits;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedpoint_Value =  std::roundf(n * (1 << fractional_Bits));
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedpoint_Value);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedpoint_Value = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits ));
}

int		Fixed::toInt( void ) const
{
	return (this->fixedpoint_Value << fractional_Bits);
}

