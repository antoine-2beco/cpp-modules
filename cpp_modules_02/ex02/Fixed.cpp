/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:28 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/03 17:40:40 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedpoint_Value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : fixedpoint_Value(n << fractional_Bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : fixedpoint_Value(std::roundf(n * (1 << fractional_Bits)))
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
        this->fixedpoint_Value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
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

bool	Fixed::operator>( const Fixed &other ) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<( const Fixed &other ) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=( const Fixed &other ) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=( const Fixed &other ) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-( const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*( const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/( const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++( void ) // prefix
{
	++this->fixedpoint_Value;
	return (*this);
}

Fixed	Fixed::operator++( int ) // postfix
{
	Fixed	tmp(*this);
	
	tmp.fixedpoint_Value = this->fixedpoint_Value++;
	return (tmp);
}

Fixed&	Fixed::operator--( void ) // prefix
{
	--this->fixedpoint_Value;
	return (*this);
}

Fixed	Fixed::operator--( int ) // postfix
{
	Fixed	tmp(*this);
	
	tmp.fixedpoint_Value = this->fixedpoint_Value--;
	return (tmp);
}

Fixed&	Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return (a);
    return (b);
}

const Fixed&	Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return (a);
    return (b);
}

Fixed&	Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return (a);
    return (b);
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return (a);
    return (b);
}
