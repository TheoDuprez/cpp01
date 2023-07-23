/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:40:04 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 14:14:14 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Weapon.hpp"

class	HumanA
{

private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon& type);
	~HumanA(void);
	void	attack(void) const;
};
