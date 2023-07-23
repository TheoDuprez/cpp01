/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:30:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 08:58:10 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombieHeap = newZombie("HeapZombie");
	Zombie	zombieStack("StackZombie");

	if (!zombieHeap)
	{
		std::cout << "Failed allocated memory with zombieHeap" << std::endl;
		return (1);
	}
	zombieHeap->announce();
	delete zombieHeap;
	zombieStack.announce();
	randomChump("randomZombieInStack");
	return (0);
}
