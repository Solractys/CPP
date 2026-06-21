/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:27:02 by csilva-s          #+#    #+#             */
/*   Updated: 2026/06/20 12:12:09 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

class	sayClass {
	public:
		int		id;
		void set_id(int);
		void	say(std::string str);
};

void sayClass::set_id(int n)
{
	id = n;
}

void	sayClass::say(std::string str)
{
	std::cout << str << std::endl;
}

int	main()
{
	sayClass sayHi;
	sayHi.set_id(42);
	sayHi.say("Hello");
	std::cout << sayHi.id;
	return (0);
}
