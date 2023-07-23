/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:35:56 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 16:38:19 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int	main(int ac, char **av)
{
	std::stringstream	buf;
	std::ifstream		infile;
	std::ofstream		outfile;

	if (ac != 4)
		return (std::cout << "Error, too few or too many arguments (need 3 arguments)" << std::endl, 1);
	else if (!std::ifstream(av[1]).good())
		return (std::cout << "Error ! The file '" << av[1] << "' does not exist !" << std::endl, 1);
	infile = getInfile(av[1]);
	outfile = getOutfile(av[1], infile);
	buf << infile.rdbuf();
	outfile << sedString(std::string(buf.str()), std::string(av[2]), std::string(av[3]));
	return (0);
}
