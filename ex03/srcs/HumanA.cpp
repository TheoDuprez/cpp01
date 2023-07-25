/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:44:26 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/25 10:55:47 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/HumanA.hpp"

HumanA::HumanA(std::string name ,Weapon& type):  _name(name), _weapon(type)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name <<" attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}
