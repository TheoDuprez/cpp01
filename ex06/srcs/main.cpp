/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:37:03 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 14:38:46 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int ac, char **av)
{
	Harl	obj;

	if (ac != 2)
		return (1);
	obj.complain(std::string(av[1]));

	return (0);
}
