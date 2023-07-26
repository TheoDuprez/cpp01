/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:35:24 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 13:22:59 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

std::ifstream*		getInfile(const char *file);
std::ofstream*		getOutfile(const char *outfileName, std::ifstream* infile);
const std::string	sedString(std::string str, std::string search, std::string replace);
