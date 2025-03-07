/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:56:28 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:01:59 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>

class Bureaucrat;

class Form {
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	
	Form();

	public :
		Form( std::string name, int gradeToSign );
		Form( std::string name, int gradeToSign, int gradeToExecute );
		Form( const Form& cpy );
		Form& operator=( const Form& cpy );
		~Form();

		const std::string	getName() const;
		const bool			getSigned() const;
		const int			getGradeToSign() const;
		const int 			getGradeToExecute() const;

		void				beSigned( const Bureaucrat& bureaucrat );

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw() { return "grade too high"; }
		};
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw() { return "grade too low"; }
		};
};

std::ostream& operator<<( std::ostream& o, const Form& src );

#endif