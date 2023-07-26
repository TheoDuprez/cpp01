/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:35:56 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 13:29:08 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ftSed.hpp"

int	main(int ac, char **av)
{
	std::stringstream	buf;
	std::string			outfileName(av[1]);
	std::ifstream		*infile;
	std::ofstream		*outfile;

	outfileName += ".replace";
	if (ac != 4)
		return (std::cout << "Error, too few or too many arguments (need 3 arguments)" << std::endl, 1);
	else
	{
		if (!std::ifstream(av[1]).good())
			return (std::cout << "Error ! The file '" << av[1] << "' does not exist, or no permissions !" << std::endl, 1);
		else if (!std::ofstream(outfileName.c_str()).good())
			return (std::cout << "Error ! The file '" << outfileName << "' already exist and have no permissions !" << std::endl, 1);
		
	}
	infile = getInfile(av[1]);
	outfile = getOutfile(av[1], infile);
	buf << infile->rdbuf();
	if (buf.fail())
		return (infile->close(), outfile->close(), delete infile, \
		delete outfile, std::cout << "Error dettected in buf" << std::endl, 1);
	*outfile << sedString(buf.str(), std::string(av[2]), std::string(av[3]));
	delete infile;
	delete outfile;
	return (0);
}
