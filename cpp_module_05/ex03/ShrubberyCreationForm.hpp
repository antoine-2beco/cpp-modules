/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:30:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:53:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

# include <iostream>

class ShrubberyCreationForm : public AForm {
	
	const std::string	_target;
	ShrubberyCreationForm();

	public :
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( const ShrubberyCreationForm& cpy );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& cpy );
		~ShrubberyCreationForm();

		const std::string	getTarget() const;
		
		void	execute( Bureaucrat const & executor ) const;

};

#endif