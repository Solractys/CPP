/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:22:37 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 02:21:44 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() : _name("") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << _name << " was deleted" << std::endl;
}

void	Zombie::announce( void ) { std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl; }
