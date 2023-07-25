/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:28:19 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/19 10:58:23 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Weapon
{

private:
	std::string	_type;

public:
	Weapon(const std::string weapon);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(const std::string type);

};
