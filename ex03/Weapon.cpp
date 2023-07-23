/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:31:35 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 14:16:41 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string weapon): _type(weapon)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
	return ;
}
