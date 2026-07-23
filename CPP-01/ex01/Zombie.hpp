/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:54:35 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 02:48:29 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &obj);
		~Zombie();
		void setName(std::string name);
		void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde(int N, std::string name );

#endif
