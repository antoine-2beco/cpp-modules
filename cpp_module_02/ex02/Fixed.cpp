/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:28 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/24 11:40:14 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedPointValue(n << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedPointValue(std::roundf(n * (1 << _fractionalBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return _fixedPointValue;
}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float>( getRawBits() ) / ( 1 << _fractionalBits );
}

int		Fixed::toInt( void ) const
{
	return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<( std::ostream& os, Fixed const& n )
{
	os << n.toFloat();
	return os;
}

bool	Fixed::operator>( const Fixed &other ) const
{
	return (getRawBits() > other.getRawBits());
}

bool	Fixed::operator<( const Fixed &other ) const
{
	return (getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=( const Fixed &other ) const
{
	return (getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=( const Fixed &other ) const
{
	return (getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return (getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return (getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &other) const
{
	return Fixed(toFloat() + other.toFloat());
}

Fixed	Fixed::operator-( const Fixed &other) const
{
	return Fixed(toFloat() - other.toFloat());
}

Fixed	Fixed::operator*( const Fixed &other) const
{
	return Fixed(toFloat() * other.toFloat());
}

Fixed	Fixed::operator/( const Fixed &other) const
{
	return Fixed(toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++( void ) // prefix
{
	++_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator++( int ) // postfix
{
	Fixed	tmp(*this);
	
	tmp._fixedPointValue = _fixedPointValue++;
	return (tmp);
}

Fixed&	Fixed::operator--( void ) // prefix
{
	--_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator--( int ) // postfix
{
	Fixed	tmp(*this);
	
	tmp._fixedPointValue = _fixedPointValue--;
	return (tmp);
}

Fixed&	Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed&	Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed&	Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}
