/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:35:56 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/27 14:54:08 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ftSed.hpp"

int	main(int ac, char **av)
{
	std::stringstream	buf;
	std::string			outfileName;
	std::ifstream		*infile;
	std::ofstream		*outfile;

	if (ac != 4)
		return (std::cout << "Error, too few or too many arguments (need 3 arguments)" << std::endl, 1);
	if (std::string(av[2]).empty() == true)
		return (std::cout << "The string searched can't be empty !" << std::endl, 1);
	outfileName = av[1];
	outfileName += ".replace";
	infile = getInfile(av[1]);
	outfile = getOutfile(outfileName.c_str(), infile);
	buf << infile->rdbuf();
	if (buf.fail())
		return (infile->close(), outfile->close(), delete infile, \
		delete outfile, std::cout << "Error detected in buf" << std::endl, 1);
	*outfile << sedString(buf.str(), std::string(av[2]), std::string(av[3]));
	delete infile;
	delete outfile;
	return (0);
}
