/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:24:51 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 22:15:48 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("") {}

Weapon::Weapon(const std::string type): _type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(const std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}


