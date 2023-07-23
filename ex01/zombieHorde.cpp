/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:08:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 10:07:24 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	zombie = new Zombie[n];
	
	for (int i = 0; i < n; i++)
		zombie[i].setZombie(name);
	return (zombie);
}

// Zombie*	zombieHorde(int n, std::string name)
// {
// 	Zombie*	zombie = new Zombie[n];
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		zombie[i].setZombie(name);
// 		std::cout << "Address of zombie [" << i << "] is : " << &zombie[i] << std::endl;
// 	}
// 	return (zombie);
// }
