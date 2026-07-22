/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:54:35 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/22 16:59:47 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie {
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		const Zombie(std::string name) const;
		void announce(Zombie zombie);
}

