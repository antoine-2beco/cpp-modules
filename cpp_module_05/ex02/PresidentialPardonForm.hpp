/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:30:10 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:53:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

# include <iostream>

class PresidentialPardonForm : public AForm {
	
	const std::string	_target;
	PresidentialPardonForm();

	public :
		PresidentialPardonForm( const std::string& target );
		PresidentialPardonForm( const PresidentialPardonForm& cpy );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& cpy );
		~PresidentialPardonForm();

		const std::string	getTarget() const;
		
		void	execute( Bureaucrat const & executor ) const;

};

#endif