/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:34:55 by ade-beco          #+#    #+#             */
/*   Updated: 2025/03/07 15:30:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& cpy ) : AForm( cpy ), _target(cpy.getTarget()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& cpy ) {
	(void)cpy;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string	ShrubberyCreationForm::getTarget() const {
	return _target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if ( getSigned() == false )
		throw AForm::NotSignedException();
	else if ( getGradeToExecute() < executor.getGrade() )
		throw AForm::GradeTooLowException();

	std::ofstream	file(getTarget() + "_shrubbery");
	if (file.is_open()) {
		file << "                      ___" 					<< std::endl;
		file << "                _,-'\"\"   \"\"\"\"`--." 		<< std::endl;
		file << "             ,-'          __,,-- \\" 			<< std::endl;
		file << "           ,\'    __,--\"\"\"\"dF      )" 		<< std::endl;
		file << "          /   .-\"Hb_,--\"\"dF      /" 		<< std::endl;
		file << "        ,\'       _Hb ___dF\"-._,-'" 			<< std::endl;
		file << "      ,'      _,-\"\"\"\"   \"\"--..__" 		<< std::endl;
		file << "     (     ,-'                  `." 			<< std::endl;
		file << "      `._,'     _   _             ;" 			<< std::endl;
		file << "       ,'     ,' `-'Hb-.___..._,-'" 			<< std::endl;
		file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" 			<< std::endl;
		file << "        `--\'   \"Hb  HH  dF\"" 				<< std::endl;
		file << "                \"Hb HH dF" 					<< std::endl;
		file << "                 \"HbHHdF" 					<< std::endl;
		file << "                  |HHHF" 						<< std::endl;
		file << "                  |HHH|" 						<< std::endl;
		file << "                  |HHH|" 						<< std::endl;
		file << "                  |HHH|" 						<< std::endl;
		file << "                  |HHH|" 						<< std::endl;
		file << "                  dHHHb" 						<< std::endl;
		file << "                .dFd|bHb.               o" 	<< std::endl;
		file << "      o       .dHFdH|HbTHb.          o /" 		<< std::endl;
		file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" 	<< std::endl;
		file << "##########################################" 	<< std::endl;
		file.close();
	}
	else {
		std::cerr << "Opening file failed !" << std::endl;
	}
}