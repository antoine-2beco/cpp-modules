/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:46:06 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/03 11:21:20 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	std::string	_ideas[100];

	public :
		Brain();
		Brain( const Brain& cpy );
		Brain& operator=( const Brain& cpy );
		~Brain();
};

#endif