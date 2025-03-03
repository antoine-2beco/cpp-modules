/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:55:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/02 18:06:19 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal {
    protected :
        std::string _type;

    public :
        WrongAnimal();
        WrongAnimal( std::string type );
        WrongAnimal( const WrongAnimal& cpy );
        WrongAnimal& operator=( const WrongAnimal& cpy );
        ~WrongAnimal();

		const std::string	getType() const;

        const void	makeSound() const;
};

#endif
