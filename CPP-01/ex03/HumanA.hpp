/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:28:49 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 22:21:38 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA 
{
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();

		void	attack() const;
};

#endif
