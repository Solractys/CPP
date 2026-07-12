/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:07:43 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/12 15:31:02 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

void	PhoneBook::add(Contact &phone, int i)
{
		// TODO: Resolver o index na Contact class
		if(i < 8)
			_phones[i] = phone;
		else
			_phones[i  % 8] = phone;
}

//void	PhoneBook::search(int index)
//{
//	
//}

void	PhoneBook::printPhones(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << _phones[i].getFirstName() << std::endl;
		std::cout << _phones[i].getPhone() << std::endl << std::endl;
	}
}

