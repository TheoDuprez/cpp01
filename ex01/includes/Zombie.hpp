/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:30:14 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 11:34:07 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cstdlib>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	~Zombie(void);

	void	announce(void) const;
	void	setZombie(const std::string name);
};

Zombie* zombieHorde(int N, std::string name);
