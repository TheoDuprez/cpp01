/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:35:24 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 16:39:52 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>

std::ifstream		getInfile(const char *file);
std::ofstream		getOutfile(const char *file, std::ifstream& infile);
const std::string	sedString(std::string str, std::string search, std::string replace);
