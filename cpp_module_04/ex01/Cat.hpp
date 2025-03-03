/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:11:31 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/02 17:50:56 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

# include <iostream>

class Cat : public Animal {
    public :
        Cat();
        Cat( const Cat& cpy );
        Cat& operator=( const Cat& cpy );
        ~Cat();

        const void makeSound() const;

		const std::string	getType() const;
};

#endif