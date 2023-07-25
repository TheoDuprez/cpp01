/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:40:04 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/25 10:54:48 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

private:
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon weapon);
};
