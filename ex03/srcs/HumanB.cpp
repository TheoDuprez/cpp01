/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:44:26 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/26 12:08:01 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name <<" attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name <<" can't attack, he have no weapon " << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
	return ;
}
