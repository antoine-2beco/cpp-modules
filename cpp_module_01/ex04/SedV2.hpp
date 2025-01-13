/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:31:36 by ade-beco          #+#    #+#             */
/*   Updated: 2025/01/13 16:24:03 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SedV2_HPP
# define SedV2_HPP

# include <iostream>
# include <fstream>

class SedV2
{
	private:
		std::string	inFile;
		std::string	outFile;

	public:
		SedV2( std::string filename );
		~SedV2();

		int	replace( std::string s1, std::string s2 );
};



#endif