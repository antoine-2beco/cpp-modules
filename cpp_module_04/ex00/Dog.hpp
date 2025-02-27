/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:11:31 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/27 12:48:35 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# include <iostream>

class Dog : public Animal {
    public :
        Dog();
        Dog( const Dog& cpy );
        Dog& operator=( const Dog& cpy );
        ~Dog();

        void makeSound();

		const std::string	getType() const;
};

#endif