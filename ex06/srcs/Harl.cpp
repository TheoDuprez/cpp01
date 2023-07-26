/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:10:31 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 14:38:55 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<<  " I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*f[0])();
					(this->*f[1])();
					(this->*f[2])();
					(this->*f[3])();
					break ;
				case 1:
					(this->*f[1])();
					(this->*f[2])();
					(this->*f[3])();
					break ;
				case 2:
					(this->*f[2])();
					(this->*f[3])();
					break ;
				case 3:
					(this->*f[3])();
					break ;
			}
			return ;
		}
	}
	std::cout << "Probably complaining about insignificant problems" << std::endl;
	return ;
}
