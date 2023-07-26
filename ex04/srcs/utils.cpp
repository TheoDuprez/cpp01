/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:35:10 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 13:25:46 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ftSed.hpp"

std::ifstream*	getInfile(const char *file)
{
	std::ifstream*		infile = new std::ifstream(file);

	if (infile->fail())
	{
		std::cout << "Error when opening input file" << std::endl;
		std::exit(1);
	}
	return (infile);
}

std::ofstream*	getOutfile(const char *outfileName, std::ifstream* infile)
{
	std::ofstream*	outfile = new std::ofstream(outfileName, std::ofstream::out);

	if (outfile->fail())
	{
		infile->close();
		delete infile;
		std::cout << "Error when opening output file" << std::endl;
		std::exit(1);
	}
	return (outfile);
}

const std::string	sedString(std::string str, std::string search, std::string replace)
{
	std::size_t	indexOccur;
	std::string	tempStart;
	std::string	tempEnd;

	if (search.empty() == true)
	{
		std::cout << "The string searched can't be empty !" << std::endl;
		std::exit(1);
	}
	if (search == replace)
		return (str);
	indexOccur = str.find(search);
	while (indexOccur != std::string::npos)
	{
		tempStart = str.substr(0, indexOccur);
		tempEnd = str.substr(indexOccur + search.length(), str.length());
		str = tempStart + replace + tempEnd;
		indexOccur = str.find(search);
	}
	return (str);
}
