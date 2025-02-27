/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/27 12:52:43 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected :
        std::string _type;

    public :
        Animal();
        Animal( std::string type );
        Animal( const Animal& cpy );
        Animal& operator=( const Animal& cpy );
        ~Animal();

		const std::string	getType() const;

        virtual void	makeSound();
};

#endif
