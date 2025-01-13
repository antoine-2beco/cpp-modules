/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:31:36 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/13 16:03:53 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
# define SEDV2_HPP

# include <iostream>
# include <fstream>

class SedV
{
	private:
		std::string	inFile;
		std::string	outFile;

	public:
		SedV2( std::string filename );
		~SedV2();

		void	replace( std::string s1, std::string s2 );
};



#endif