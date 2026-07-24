/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:11:04 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 22:16:06 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include <string>

class Weapon 
{
	private:
		std::string _type;
	public: 
		Weapon();
		Weapon(const std::string type);
		~Weapon();

		void setType(const std::string type);
		const std::string &getType() const;
};

#endif
