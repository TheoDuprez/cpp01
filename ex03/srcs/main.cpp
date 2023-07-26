/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:55:45 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 12:08:50 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main()
{
	{
		Weapon t_weapon = Weapon("AK47");

		HumanA bob("Bob", t_weapon);
		bob.attack();
		t_weapon.setType("Desert Eagle");
		bob.attack();
	}
	{
		Weapon ct_weapon = Weapon("M4A4");

		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(ct_weapon);
		jim.attack();
		ct_weapon.setType("M4A1s");
		jim.attack();
	}
	return 0;
}
