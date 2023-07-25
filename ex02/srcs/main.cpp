/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:21:04 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 10:26:44 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of string str in memory    : " << &str << std::endl;
	std::cout << "Address of string str in stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of string str in stringREF : " << &stringREF << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Value of string str in memory      : " << str << std::endl;
	std::cout << "Value of string str in stringPTR   : " << *stringPTR << std::endl;
	std::cout << "Value of string str in stringREF   : " << stringREF << std::endl;
	return (0);
}
