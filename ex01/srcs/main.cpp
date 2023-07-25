/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:30:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/25 10:47:15 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = zombieHorde(10, "tduprez");

	delete[] zombie;
	return (0);
}

// int	main(void)
// {
// 	Zombie	*zombie = zombieHorde(10, "tduprez");

// 	std::cout << "Addr of zombie is : " << zombie << std::endl;
// 	delete[] zombie;
// 	return (0);
// }
