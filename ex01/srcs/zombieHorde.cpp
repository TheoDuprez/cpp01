/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:08:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 11:45:43 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	zombie = new Zombie[n];

	if (!zombie)
		return (NULL);
	for (int i = 0; i < n; i++)
		zombie[i].setZombie(name);
	return (zombie);
}
