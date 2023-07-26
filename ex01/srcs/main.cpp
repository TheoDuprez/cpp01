/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:30:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 11:48:09 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	int	N = 10;
	Zombie	*zombie = zombieHorde(N, "tduprez");

	if (!zombie)
		return (std::cout << "An error occured with new allocation for Zombie class" << std::endl, 1);
	for (int i = 0; i < N; i++)
	{
		zombie->announce();
		std::cout << "Addr of zombie is : [" << &zombie[i] << "]" << std::endl;
	}
	delete[] zombie;
	return (0);
}
