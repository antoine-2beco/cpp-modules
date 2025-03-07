/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:47:26 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 17:59:19 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

# include <iostream>

class Intern {
	public :
		Intern();
		Intern( const Intern& cpy );
		Intern&	operator=( const Intern& cpy );
		~Intern();

		AForm*	makeForm( std::string type, std::string target );
};

#endif