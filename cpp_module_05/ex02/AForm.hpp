/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:53 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:55:55 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"

# include <iostream>

class Bureaucrat;

class AForm {
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	
	AForm();

	public :
		AForm( std::string name, int gradeToSign );
		AForm( std::string name, int gradeToSign, int gradeToExecute );
		AForm( const AForm& cpy );
		AForm& operator=( const AForm& cpy );
		~AForm();

		const std::string	getName() const;
		const bool			getSigned() const;
		const int			getGradeToSign() const;
		const int 			getGradeToExecute() const;

		void				beSigned( const Bureaucrat& bureaucrat );

		virtual void		execute( Bureaucrat const & executor ) const = 0;


		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw() { return "grade too high"; }
		};
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw() { return "grade too low"; }
		};
};

std::ostream& operator<<( std::ostream& o, const AForm& src );

#endif