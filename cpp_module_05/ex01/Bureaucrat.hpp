/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:31:46 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 14:02:03 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

# include <iostream>

class Form;

class	Bureaucrat {
	const std::string	_name;
	int			_grade;

	Bureaucrat();
	
	public :
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& cpy );
		Bureaucrat& operator=( const Bureaucrat& cpy );
		~Bureaucrat();

		const std::string	getName() const;
		const int			getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		void	signForm( Form& form );

		class	GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw() { return "grade too high"; }
		};

		class	GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw() { return "grade too low"; }
		};
};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& src );

#endif
