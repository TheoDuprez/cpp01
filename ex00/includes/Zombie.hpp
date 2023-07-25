/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:30:14 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 08:52:10 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>


class Zombie
{
private:
	std::string	_name;

public:
	Zombie(const std::string name);
	~Zombie(void);

	void	announce(void) const;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
