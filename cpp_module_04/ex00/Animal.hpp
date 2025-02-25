/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/25 15:14:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected :
        std::string type;

    public :
        Animal();
        Animal( std::string type );
        Animal( const Animal& other );
        Animal& operator=( const Animal& other );
        ~Animal();
}

#endif
