/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:07:43 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/19 14:59:06 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

void	PhoneBook::add(Contact &phone, int i)
{
		if(i < 8)
			_phones[i] = phone;
		else
			_phones[i  % 8] = phone;
}

void	PhoneBook::printPhones(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << _phones[i].getFirstName() << std::endl;
		std::cout << _phones[i].getPhone() << std::endl << std::endl;
	}
}

Contact const 	*PhoneBook::getPhones() const 
{
	return (_phones);
}

Contact	const &PhoneBook::getPhonesById (int id) const
{
	return ( _phones[id]);
}
