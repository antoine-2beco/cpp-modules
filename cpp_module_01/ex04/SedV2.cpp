/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:30:42 by ade-beco          #+#    #+#             */
/*   Updated: 2025/02/20 12:25:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

SedV2::SedV2(  std::string filename )
{
	this->inFile = filename;
	this->outFile = this->inFile + ".replace";
}

SedV2::~SedV2()
{
}

int	SedV2::replace( std::string s1, std::string s2 )
{
	std::ifstream	ifs(this->inFile);
	if (ifs.is_open())
	{
		std::string	content;
		if (std::getline(ifs, content, '\0'))
		{
			std::ofstream	ofs(this->outFile);
			size_t			pos = content.find(s1);
			while ( pos != std::string::npos )
			{
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1);
			}
			ofs << content;
			ofs.close();
		}
		else
		{
			std::cerr << "Empty file !" << std::endl;
			return (EXIT_FAILURE);
		}
		ifs.close();
	}
	else
	{
		std::cerr << "Opening file failed !" << std::endl;
		return (EXIT_FAILURE);
	}
	return (0);	
}
 