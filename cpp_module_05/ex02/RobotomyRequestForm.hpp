/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:38 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:57:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

# include <iostream>

class RobotomyRequestForm : public AForm {
	
	const std::string	_target;
	RobotomyRequestForm();

	public :
		RobotomyRequestForm( const std::string& target );
		RobotomyRequestForm( const RobotomyRequestForm& cpy );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& cpy );
		~RobotomyRequestForm();

		const std::string	getTarget() const;
		
		void	execute( Bureaucrat const & executor ) const;

};

#endif