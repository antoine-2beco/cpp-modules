/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:55:35 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/02 17:56:30 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

# include <iostream>

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat( const WrongCat& cpy );
        WrongCat& operator=( const WrongCat& cpy );
        ~WrongCat();

        const void makeSound() const;

		const std::string	getType() const;
};

#endif