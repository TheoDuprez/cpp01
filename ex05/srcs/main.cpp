/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:37:03 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 14:38:11 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl	obj;

	obj.complain("DEBUG");
	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("ERROR");

	return (0);
}
